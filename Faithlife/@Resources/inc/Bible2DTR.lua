function Initialize()

    Books = {
        ["Genesis"] = 1,
        ["Exodus"] = 2,
        ["Leviticus"] = 3,
        ["Numbers"] = 4,
        ["Deuteronomy"] = 5,
        ["Joshua"] = 6,
        ["Judges"] = 7,
        ["Ruth"] = 8,
        ["1 Samuel"] = 9,
        ["2 Samuel"] = 10,
        ["1 Kings"] = 11,
        ["2 Kings"] = 12,
        ["1 Chronicles"] = 13,
        ["2 Chronicles"] = 14,
        ["Ezra"] = 15,
        ["Nehemiah"] = 16,
        ["Esther"] = 17,
        ["Job"] = 18,
        ["Psalm"] = 19,
        ["Proverbs"] = 20,
        ["Ecclesiastes"] = 21,
        ["Song of Solomon"] = 22,
        ["Isaiah"] = 23,
        ["Jeremiah"] = 24,
        ["Lamentations"] = 25,
        ["Ezekiel"] = 26,
        ["Daniel"] = 27,
        ["Hosea"] = 28,
        ["Joel"] = 29,
        ["Amos"] = 30,
        ["Obadiah"] = 31,
        ["Jonah"] = 32,
        ["Micah"] = 33,
        ["Nahum"] = 34,
        ["Habakkuk"] = 35,
        ["Zephaniah"] = 36,
        ["Haggai"] = 37,
        ["Zechariah"] = 38,
        ["Malachi"] = 39,
        ["Matthew"] = 61,
        ["Mark"] = 62,
        ["Luke"] = 63,
        ["John"] = 64,
        ["Acts"] = 65,
        ["Romans"] = 66,
        ["1 Corinthians"] = 67,
        ["2 Corinthians"] = 68,
        ["Galatians"] = 69,
        ["Ephesians"] = 70,
        ["Philippians"] = 71,
        ["Colossians"] = 72,
        ["1 Thessalonians"] = 73,
        ["2 Thessalonians"] = 74,
        ["1 Timothy"] = 75,
        ["2 Timothy"] = 76,
        ["Titus"] = 77,
        ["Philemon"] = 78,
        ["Hebrews"] = 79,
        ["James"] = 80,
        ["1 Peter"] = 81,
        ["2 Peter"] = 82,
        ["1 John"] = 83,
        ["2 John"] = 84,
        ["3 John"] = 85,
        ["Jude"] = 86,
        ["Revelation"] = 87
    }

end

-- Example Refs
--   =bible.77.1.15
--   =bible.82.1.5-82.1.11
--   =bible.77.1.15-77.2.3
--   John 3:16-17
--   John 3:16,18
--   John 3
--   john 1-2
--   John 1:1-2:2
--   Jude 2-3

function Update()
    local MeasureVerseRef = SKIN:GetMeasure('MeasureVerseRef')
    local bible_ref = MeasureVerseRef:GetStringValue()

    local book, vss = string.match(bible_ref, '^(.+)%s([^%s]+)$')
    if string.find(vss, '-') then
        -- Add support for bible ranges
    end

    -- Naive first "get it working" version
    local ch, vs
    if string.find(vss, ':') then
        ch, vs = string.match(vss, '^(.+):(.+)$')
    else
        ch = 1
        vs = vss
    end

	return 'bible.' .. Books[book] .. '.' .. ch .. '.' .. vs
end