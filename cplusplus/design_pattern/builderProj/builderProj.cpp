// builderProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Director.h"
#include "IBuilderProduct.h"
#include "IBuilder.h"
#include "BuilderProduct1.h"
#include "BuilderProduct2.h"
#include "Builder1.h"
#include "Builder2.h"

int main()
{
    std::shared_ptr<IBuilderProduct> myProduct1 = std::make_shared<BuilderProduct1>();
    std::shared_ptr<IBuilder> myBuilder1 = std::make_shared<Builder1>(myProduct1);
    std::shared_ptr<Director> myDirector1 = std::make_shared<Director>(myBuilder1);
    myDirector1->create();

    std::shared_ptr<IBuilderProduct> myProduct2 = std::make_shared<BuilderProduct2>();
    std::shared_ptr<IBuilder> myBuilder2 = std::make_shared<Builder2>(myProduct2);
    std::shared_ptr<Director> myDirector2 = std::make_shared<Director>(myBuilder2);
    myDirector2->create();
    return 0;
}

