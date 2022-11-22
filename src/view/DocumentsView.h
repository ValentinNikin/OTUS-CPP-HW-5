#pragma once

#include <memory>

#include "../services/IDocumentsService.h"
#include "../types/IObserver.h"

class DocumentsView : public IObserver {
public:
    DocumentsView(const std::shared_ptr<IDocumentsService>& documentsService);
    void update() override;
private:
    std::shared_ptr<IDocumentsService> _documentsService;
};

