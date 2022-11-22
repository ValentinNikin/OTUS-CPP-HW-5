#pragma once

#include <vector>
#include <memory>

#include "types/Document.h"
#include "types/Observable.h"

class IDocumentsService : public Observable {
public:
    virtual std::vector<std::shared_ptr<Document>> getOpenedDocuments() = 0;
    virtual std::shared_ptr<Document> getActiveDocument() = 0;
    virtual void createDocument() = 0;
    virtual void saveDocument(const std::string& documentId) = 0;
    virtual void saveAsDocument(const std::string& documentId, const std::string& targetPath) = 0;
    virtual void openDocument(const std::string& path) = 0;
    virtual void makeActiveDocument(const std::string& documentId) = 0;
    virtual void closeDocument(const std::string& documentId) = 0;
    virtual ~IDocumentsService() = default;
};