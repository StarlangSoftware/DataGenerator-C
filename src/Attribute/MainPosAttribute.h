//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#ifndef DATAGENERATOR_MAINPOSATTRIBUTE_H
#define DATAGENERATOR_MAINPOSATTRIBUTE_H

#include <MorphologicalParse.h>
#include <Attribute/Attribute.h>

Attribute_ptr create_main_pos_attribute(const Morphological_parse* parse);

#endif //DATAGENERATOR_MAINPOSATTRIBUTE_H
