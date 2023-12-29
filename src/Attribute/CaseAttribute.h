//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#ifndef DATAGENERATOR_CASEATTRIBUTE_H
#define DATAGENERATOR_CASEATTRIBUTE_H

#include <MorphologicalParse.h>
#include "Attribute/Attribute.h"

Attribute_ptr create_case_attribute(const Morphological_parse* parse);

#endif //DATAGENERATOR_CASEATTRIBUTE_H
