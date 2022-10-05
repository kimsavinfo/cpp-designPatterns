#include <string>
#include <vector>

class FormattedText {
public:
    struct TextRange {
        int start, end;
        bool capitalize, bold, italic;

        bool covers(int position) const {
            return position >= start && position <= end;
        }
    };

    TextRange& get_range(int start, int end) {
        formatting.emplace_back(TextRange{ start, end });
        return *formatting.rbegin();
    }

    explicit FormattedText(const std::string& plainText)
        : plain_text{plainText} {
    }

    friend std::ostream& operator<<(std::ostream& os, const FormattedText& text) {
        std::string outputString;
        for (size_t iCharacter = 0; iCharacter < text.plain_text.length(); iCharacter++) {
            auto character = text.plain_text[iCharacter];
            for (const auto& range : text.formatting) {
                if (range.covers(iCharacter) && range.capitalize) {
                    character = toupper(character);
                }
            }
            outputString += character;
        }
        return os << outputString;
    }

private:
    std::string plain_text;
    std::vector<TextRange> formatting;
};