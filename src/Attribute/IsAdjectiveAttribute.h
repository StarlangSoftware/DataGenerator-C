//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#ifndef DATAGENERATOR_ISADJECTIVEATTRIBUTE_H
#define DATAGENERATOR_ISADJECTIVEATTRIBUTE_H

#include <Attribute/Attribute.h>
#include <MorphologicalParse.h>

Attribute_ptr create_adjective_attribute(const Morphological_parse* parse);

#endif //DATAGENERATOR_ISADJECTIVEATTRIBUTE_H
