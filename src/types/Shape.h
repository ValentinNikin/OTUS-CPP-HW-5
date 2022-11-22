#pragma once

#include <string>

#include "./Point.h"

class Shape {
public:
    std::string getId() const;
    std::string getOwnerId() const;
    uint16_t getRotation() const;
    void setRotation(uint16_t rotation);
    Point getAnchorPoint() const;
    void setAnchorPoint(Point anchorPoint);
    uint32_t getZIndex() const;
    void setZIndex(uint32_t zIndex);
protected:
    Shape(
            const std::string& id,
            const std::string& ownerId,
            uint32_t zIndex);
    virtual ~Shape() = default;
private:
    std::string _id;
    std::string _ownerId;
    uint16_t _rotation {0};
    Point _anchorPoint { 0, 0 };
    uint32_t _zIndex {0};
};

class Rectangle : public Shape {
public:
    Rectangle(const std::string& id,
              const std::string& ownerId,
              uint32_t zIndex,
              Point position,
              uint32_t width,
              uint32_t height);

    Point getPosition() const;
    uint32_t getWidth() const;
    uint32_t getHeight() const;

private:
    Point _position { 0,0 };
    uint32_t _width {0};
    uint32_t _height {0};
};

class Circle : public Shape {
public:
    Circle(const std::string& id,
           const std::string& ownerId,
           uint32_t zIndex,
           Point position,
           uint32_t radius);

    Point getPosition() const;
    uint32_t getRadius() const;
private:
    Point _position { 0, 0 };
    uint32_t _radius {0};
};