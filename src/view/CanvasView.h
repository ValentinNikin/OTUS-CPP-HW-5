#pragma once

#include <memory>

#include "../services/ICanvasService.h"
#include "../types/IObserver.h"

class CanvasView: public IObserver {
public:
    CanvasView(const std::shared_ptr<ICanvasService>& canvasService);
    void update() override;
private:
    std::shared_ptr<ICanvasService> _canvasService;
};
