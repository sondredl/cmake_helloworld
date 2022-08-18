class Foo {
    Car *car;
    public:
    Foo(): car(nullptr){}
    void buyCar(){
        car = new Car;
    }
    void Drive(){

    }
    ~Foo(){
        delete car;
        car = nullptr;
    }
}


void Foo(){

}