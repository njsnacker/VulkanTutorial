#ifndef LIGHT_H
#define LIGHT_H


class Light
{
    public:
        Light();
        virtual ~Light();
        Light(const Light& other);
        Light& operator=(const Light& other);

    protected:

    private:
};

#endif // LIGHT_H
