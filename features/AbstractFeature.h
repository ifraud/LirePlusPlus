#ifndef ABSTRACTFEATURE_H
#define ABSTRACTFEATURE_H

class AbstractFeature{

public:
  AbstractFeature();
  ~AbstractFeature();
  virtual void extract() =0;

};

#endif
