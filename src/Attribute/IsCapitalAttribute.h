//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#ifndef DATAGENERATOR_ISCAPITALATTRIBUTE_H
#define DATAGENERATOR_ISCAPITALATTRIBUTE_H

#include <Attribute/Attribute.h>
#include <MorphologicalParse.h>

Attribute_ptr create_capital_attribute(const char* surfaceForm);

bool is_upper_attribute(const char* surfaceForm);

#endif //DATAGENERATOR_ISCAPITALATTRIBUTE_H
