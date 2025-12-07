#include <iostream>
using namespace std;

class Grain {
    private:
    double objectSize;
    double imageSize;

    public:
    Grain(double obj, double img){
        objectSize = obj;
        imageSize = img;
    }
    //Setters
    void setObjectSize(double obj) {objectSize = obj;}
    void setImageSize(double img) {imageSize = img;}

    //Calculate magnification
    double CalculateMagnification() {
        if(objectSize == 0) return 0;
        return imageSize * objectSize;
    }

    friend void showMagnification(Grain g);
};

//Friend Function definition
void showMagnification(Grain g) {
    cout << "Object Size: " << g.objectSize << "m" << endl;
    cout << "Image Size: " << g.imageSize << "m" << endl;
    cout << "Magnification=" << g.imageSize << "*" << g.objectSize << "=" <<g.CalculateMagnification()<<"X"<<endl;
}

int main() {
    Grain sand(0.5, 25);
    showMagnification(sand);
    return 0;
}