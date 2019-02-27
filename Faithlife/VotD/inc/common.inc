[Rainmeter]
Update=1000
AccurateText=1
OnRefreshAction=[!HideMeterGroup HeaderBar][!HideMeterGroup CommandBar][!Update]

[Metadata]
Name=Faithlife Verse of the Day
Author=Randy W. Sims
Information=
Version=0.5.7
License=MIT


;; ---------- Fallback Background ----------------------------------------

[Background]
Meter=Image
BackgroundMode=2
SolidColor=5fbc39
W=#Width#
H=#Height#
LeftMouseUpAction=[https://logos.com/verse-of-the-day]
Group=Background

[BackgroundLogo]
Meter=Image
ImageName=#@#Images\Faithlife-white.png
PreserveAspectRatio=1
AntiAlias=1
W=(#Width# * 0.60)
;;  X = ((#Width# / 2) - ((#Width# * 0.60) / 2)) ==
X=(#Width# * 0.2)
Y=(#Height# / 5)
Group=Background

[BackgroundTextVotD]
Meter=String
Text="Verse of the Day"
AntiAlias=1
FontFace=Source Sans Pro
FontSize=([Background:H] / 7)
FontColor=333333
StringAlign=Center
y=0R
x=(#Width# / 2)
Group=Background


;; ---------- Measures ----------------------------------------

[MeasureDate]
Measure=Time
Format=%Y-%m-%d

[MeasureVotDLightbox]
Measure=String
String=https://bible.faithlife.com/verseoftheday/lightbox/[MeasureDate]
DynamicVariables=1

[MeasureVotDSite]
Measure=WebParser
URL=[&MeasureVotDLightbox]
RegExp=(?siU)<link rel="image_src" href="(.*)\?width=(.*)".*<meta property="og:title" content="(.*)".*<meta property="og:description" content="(.*)"
;; Update every 15 minutes (900 UpdateRate * 1000ms Update)
UpdateRate=900
DynamicVariables=1

[MeasureVotDImage]
Measure=WebParser
URL=[MeasureVotDSite]?width=#Width#
StringIndex=1
Download=1
DownloadFile=VotD.jpg
FinishAction=[!HideMeterGroup Background][!ShowMeterGroup VotD][!Update]
OnConnectErrorAction=[!ShowMeterGroup Background][!HideMeterGroup VotD][!Update]
OnDownloadErrorAction=[!ShowMeterGroup Background][!HideMeterGroup VotD][!Update]
DynamicVariables=1

[MeasureVerseShortRef]
Measure=WebParser
URL=[MeasureVotDSite]
StringIndex=1
RegExpSubstitute=1
Substitute="http://bible.faithlife.com/verseoftheday/image/(.*)$":"\1"

[MeasureVerseRef]
Measure=WebParser
URL=[MeasureVotDSite]
StringIndex=3

[MeasureVerseText]
Measure=WebParser
URL=[MeasureVotDSite]
StringIndex=4
RegExpSubstitute=1
Substitute="(?s)\s+":" "
DynamicVariables=1

[MeasureVerseFormattedText]
Measure=String
String="[MeasureVerseRef]#CRLF#[MeasureVerseText]"
DynamicVariables=1
