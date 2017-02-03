#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
  private:
     double width;
     double length;
  public:

     //constructors
     Rectangle()
     {
        width  = 1;
        length = 1;
     };
     Rectangle(double w, double y)
     {
        width  = w;
        length = y;
     };

     //getters
     void setWidth(double w)
     {
        width = w;
     };
     void setLength(double y)
     {
        length = y;
     };

     //setters
     double getWidth() const
     {
        return width;
     };
     double getLength() const
     {
        return length;
     };
     
     //feature functions(methods)
     double getArea() 
     {
       return width * length;
     };

};

#endif
