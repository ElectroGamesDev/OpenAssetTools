#pragma once

#include "Parsing/Menu/MenuFileParser.h"

class SequenceMenuDef final : public MenuFileParser::sequence_t
{
protected:
    void ProcessMatch(MenuFileParserState* state, SequenceResult<SimpleParserValue>& result) const override;

public:
    SequenceMenuDef();
};
