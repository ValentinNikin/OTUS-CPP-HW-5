#include "Shape.h"

Shape::Shape(
        const std::string& id,
        const std::string& ownerId,
        uint32_t zIndex)
    : _id(id),
    _ownerId(ownerId),
    _zIndex(zIndex) {}

std::string Shape::getId() const {
    return _id;
}

std::string Shape::getOwnerId() const {
    return _ownerId;
}

uint16_t Shape::getRotation() const {
    return _rotation;
}

void Shape::setRotation(uint16_t rotation) {
    _rotation = rotation;
}

Point Shape::getAnchorPoint() const {
    return _anchorPoint;
}

void Shape::setAnchorPoint(Point anchorPoint) {
    _anchorPoint = anchorPoint;
}

uint32_t Shape::getZIndex() const {
    return _zIndex;
}

void Shape::setZIndex(uint32_t zIndex) {
    _zIndex = zIndex;
}

Rectangle::Rectangle(const std::string& id,
          const std::string& ownerId,
          uint32_t zIndex,
          Point position,
          uint32_t width,
          uint32_t height)
          : Shape(id, ownerId, zIndex),
          _position(position),
          _width(width),
          _height(height) {}

Point Rectangle::getPosition() const {
    return _position;
}

uint32_t Rectangle::getWidth() const {
    return _width;
}

uint32_t Rectangle::getHeight() const {
    return _height;
}

Circle::Circle(const std::string& id,
       const std::string& ownerId,
       uint32_t zIndex,
       Point position,
       uint32_t radius)
   : Shape(id, ownerId, zIndex),
     _position(position),
     _radius(radius) {}

Point Circle::getPosition() const {
    return _position;
}

uint32_t Circle::getRadius() const {
    return _radius;
}