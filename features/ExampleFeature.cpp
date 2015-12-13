

#include <features/ExampleFeature.h>
#include <utils/easylogging++.h>

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
	LOG(INFO) << "Initializing Example Feature";
}

ExampleFeature::~ExampleFeature()
= default;

void ExampleFeature::extract()
{
  
}
