#pragma once

#include <stdint.h>

#include "./Point.h"

/**
 * Промежуточный класс для передачи информации о создаваемом объекте из
 * View в Model
 */
struct ShapeParams {
    virtual ~ShapeParams() = default;
};

struct RectangleParams : ShapeParams {
    Point position { 0,0 };
    uint32_t width {0};
    uint32_t height {0};
};

struct CircleParams : ShapeParams {
    Point position { 0,0 };
    uint32_t radius {0};
};