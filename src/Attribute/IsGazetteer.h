//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#ifndef DATAGENERATOR_ISGAZETTEER_H
#define DATAGENERATOR_ISGAZETTEER_H

#include <Attribute/Attribute.h>
#include <MorphologicalParse.h>
#include <Gazetteer.h>

Attribute_ptr create_gazetteer_attribute(Gazetteer_ptr gazetteer, const char* surfaceForm);

#endif //DATAGENERATOR_ISGAZETTEER_H
