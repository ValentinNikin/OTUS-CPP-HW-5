#pragma once

#include <memory>

#include "../services/ICanvasService.h"
#include "../view/CanvasView.h"
#include "../types/ShapeParams.h"

class CanvasController {
public:
    CanvasController(const std::shared_ptr<ICanvasService>& canvasService);

    void addObject(const std::shared_ptr<ShapeParams>& params);
    void removeObject(const std::string& objectId);

    void resizeCanvas(uint32_t newWidth, uint32_t newHeight);
    void clear();

    std::shared_ptr<CanvasView> getView();
private:
    std::shared_ptr<ICanvasService> _canvasService;
};