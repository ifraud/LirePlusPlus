#ifndef EXAMPLEFEATURE_H
#define EXAMPLEFEATURE_H

#include <features/AbstractFeature.h>

#include <memory>
class ExampleFeature : public AbstractFeature{

public:
  ExampleFeature();
  ~ExampleFeature();
  void extract();
  void cuExtract();

private:
  class Private;
  std::unique_ptr<Private> p_;
};

#endif