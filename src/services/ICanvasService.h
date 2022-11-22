#pragma once

#include "types/Observable.h"
#include "types/IObserver.h"
#include "types/Canvas.h"
#include "types/ShapeParams.h"

class ICanvasService : public Observable, public IObserver {
public:
    virtual std::vector<std::shared_ptr<Shape>> getDrawedObjects() = 0;
    virtual void addObject(const std::shared_ptr<ShapeParams>& params) = 0;
    virtual void removeObject(const std::string& objectId) = 0;
    virtual uint32_t getWidth() const = 0;
    virtual uint32_t getHeight() const = 0;
    virtual void resizeCanvas(uint32_t newWidth, uint32_t newHeight) = 0;
    virtual void clear() = 0;
    virtual ~ICanvasService() = default;
};