#include "uncommentselection.h"
#include <QTextBlock>

using namespace Comment;

CommentDefinition::CommentDefinition() :
    isAfterWhiteSpaces(false)
{}

void CommentDefinition::setComments(QString singleLineComment, QString multiLineCommentStart, QString multiLineCommentEnd)
{
    singleLine = singleLineComment;
    multiLineStart = multiLineCommentStart;
    multiLineEnd = multiLineCommentEnd;
}

bool CommentDefinition::isValid() const
{
    return hasSingleLineStyle() || hasMultiLineStyle();
}

bool CommentDefinition::hasSingleLineStyle() const
{
    return !singleLine.isEmpty();
}

bool CommentDefinition::hasMultiLineStyle() const
{
    return !multiLineStart.isEmpty() && !multiLineEnd.isEmpty();
}

