VULKAN_SDK_PATH = /home/njsnacker/vulkan-sdk/1.1.77.0

CC = g++
TARGET = VulkanRendering
CPPFLAGS = -std=c++11 -I$(VULKAN_SDK_PATH)/include
LDFLAGS = -L$(VULKAN_SDK_PATH)/lib `pkg-config --static --libs glfw3` -lvulkan

VulkanRendering: *.hpp *.cpp vert.spv frag.spv
	g++ $(CPPFLAGS) -o $(TARGET) *.cpp $(LDFLAGS)

vert.spv: shader.vert
	$(VULKAN_SDK_PATH)/x86_64/bin/glslangValidator -V shader.vert

frag.spv: shader.frag
	$(VULKAN_SDK_PATH)/x86_64/bin/glslangValidator -V shader.frag

.PHONY: test clean

test: VulkanRendering
    LD_LIBRARY_PATH=$(VULKAN_SDK_PATH)/lib VK_LAYER_PATH=$(VULKAN_SDK_PATH)/etc/explicit_layer.d ./$(TARGET)

clean:
	rm -f $(TARGET) *.o
