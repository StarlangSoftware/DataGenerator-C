//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#ifndef DATAGENERATOR_ISPROPERNOUNATTRIBUTE_H
#define DATAGENERATOR_ISPROPERNOUNATTRIBUTE_H

#include <MorphologicalParse.h>
#include <Attribute/Attribute.h>

Attribute_ptr create_proper_noun_attribute(const Morphological_parse* parse);

#endif //DATAGENERATOR_ISPROPERNOUNATTRIBUTE_H
