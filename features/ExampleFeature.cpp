

#include <features/ExampleFeature.h>

#include <memory>
#include <iostream>

class ExampleFeature::Private
{

public:
  Private();
};

ExampleFeature::Private::Private()
{

}

ExampleFeature::ExampleFeature()
  : p_(new Private())
{

}

ExampleFeature::~ExampleFeature()
= default;

void ExampleFeature::extract()
{
  std::cout<<"blah blah\n";
}
