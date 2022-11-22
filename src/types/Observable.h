#pragma once

#include <vector>
#include <memory>

#include "./IObserver.h"

class Observable {
public:
    void addObserver(const std::shared_ptr<IObserver>& observer);
protected:
    void notifyUpdate();
private:
    std::vector<std::shared_ptr<IObserver>> _observers;
};
