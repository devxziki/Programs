#include <iostream>
using namespace std;

class RGB 
{
    public:
        int r,g,b;

        RGB(int red, int green, int blue) : r(red), g(green), b(blue) {}
};

class HSV 
{
    public:
        float h,s,v;

        HSV(float hue, float saturation, float value) : h(hue), s(saturation), v(value) {}
};

class ColorConverter 
{
    public:
        static HSV rgbToHsv(const RGB& rgb) 
        {
            float r=rgb.r/255.0;
            float g=rgb.g/255.0;
            float b=rgb.b/255.0;
            float max=std::max(r,std::max(g,b));
            float min=std::min(r,std::min(g,b));
            float h,s,v=max;

            float d=max-min;
            s=(max==0) ? 0 : d/max;

            if(max==min) 
            {
                h=0; // achromatic
            } 
            else 
            {
                if(max==r) 
                {
                    h=(g-b)/d+(g<b ? 6:0);
                } 
                else if(max==g) 
                {
                    h=(b-r)/d+2;
                } 
                else 
                {
                    h=(r-g)/d+4;
                }
                h/=6;
            }

            return HSV(h*360,s*100,v*100);
        }

        static RGB hsvToRgb(const HSV& hsv) {
            float h=hsv.h/360;
            float s=hsv.s/100;
            float v=hsv.v/100;

            int r,g,b;
            int i=static_cast<int>(h*6);
            float f=h*6-i;
            float p=v*(1-s);
            float q=v*(1-f*s);
            float t=v*(1-(1-f)*s);
            i=i%6;

            if(i==0) 
            {
                r=v*255; 
                g=t*255; 
                b=p*255;
            } 
            else if(i==1) 
            {
                r=q*255; 
                g=v*255; 
                b=p*255;
            } 
            else if(i==2) 
            {
                r=p*255; 
                g=v*255; 
                b=t*255;
            } 
            else if(i==3) 
            {
                r=p*255; 
                g=q*255; 
                b=v*255;
            } 
            else if(i==4) 
            {
                r=t*255; 
                g=p*255; 
                b=v*255;
            } 
            else 
            {
                r=v*255; g=p*255; b=q*255;
            }

            return RGB(r,g,b);
        }
};

int main() 
{
    RGB rgbColor(255, 0, 0);
    HSV hsvColor = ColorConverter::rgbToHsv(rgbColor);
    cout << "HSV: " << hsvColor.h << ", " << hsvColor.s << ", " << hsvColor.v << endl;

    RGB convertedBack = ColorConverter::hsvToRgb(hsvColor);
    cout << "RGB: " << convertedBack.r << ", " << convertedBack.g << ", " << convertedBack.b << endl;

    return 0;
}