#include "main.hpp"

#include <QTextEdit>
#include <QSyntaxHighlighter>

//A class used to highlight a line in a QTextEdit
class ColorText : public QSyntaxHighlighter {
public:

	//Constructor
    ColorText(QTextEdit * parent);

    //Destructor
    ~ColorText();

    //Set current highlighting information
    void setHighlightInfo(const QString& h, const Qt::GlobalColor c);

protected:

	//Override the highlighting function
	void highlightBlock(const QString& text);

private:

	//The string and color to highlight
    const QString * highlight;
    Qt::GlobalColor theColor;

};
