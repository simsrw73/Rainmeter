;; ---------- Header Bar ----------------------------------------

[MeterHeader]
Meter=Image
SolidColor=000000aa
X=0
Y=0
W=#Width#
H=24
MouseOverAction=[!DisableMouseAction MeterVotD "LeftMouseUpAction"]
MouseLeaveAction=[!EnableMouseAction MeterVotD "LeftMouseUpAction"]
Group=HeaderBar

[MeterHeaderTitle]
Meter=String
Text=[MeasureVerseRef]
AntiAlias=1
FontColor=ffffff
FontSize=12
FontFace=Source Sans Pro
X=4
Y=2
DynamicVariables=1
Group=HeaderBar

[MeterHeaderShareLabel]
Meter=String
Text=Share on:
AntiAlias=1
FontColor=ffffff
FontSize=10
FontFace=Source Sans Pro
StringAlign=Right
X=(#Width# - (#SmIconSize# * 2))
Y=4
Group=HeaderBar

[MeterHeaderShareToFL]
Meter=Image
TooltipText="Share on Faithlife"
ImageName=#@#Images\fl-round.png
PreserveAspectRatio=1
GreyScale=1
X=(#Width# - (#SmIconSize# * 2) + 8)
Y=4
H=16
LeftMouseUpAction=https://faithlife.com/share?content=Faithlife%20VotD%20from%20Rainmeter&url=[MeasureVotDLightbox:EncodeURL]
MouseOverAction=[!SetOption MeterHeaderShareToFL GreyScale 0][!Update]
MouseLeaveAction=[!SetOption MeterHeaderShareToFL GreyScale 1][!Update]
DynamicVariables=1
Group=HeaderBar

[MeterHeaderShareToFB]
Meter=Image
TooltipText="Share on Facebook"
ImageName=#@#Images\fb-round.png
PreserveAspectRatio=1
GreyScale=1
X=4R
Y=4
H=16
LeftMouseUpAction=https://www.facebook.com/dialog/share?app_id=538368573316629&display=popup&href=[MeasureVotDLightbox:EncodeURL]&redirect_uri=[MeasureVotDLightbox:EncodeURL]
MouseOverAction=[!SetOption MeterHeaderShareToFB GreyScale 0][!Update]
MouseLeaveAction=[!SetOption MeterHeaderShareToFB GreyScale 1][!Update]
DynamicVariables=1
Group=HeaderBar


;; ----- Command Bar -----------------------------------

[MeterCommandBar]
Meter=Image
SolidColor=000000aa
X=0
Y=(#Height# - 40)
W=#Width#
H=(#LgIconSize# + #IconVPad#)
MouseOverAction=[!DisableMouseAction MeterVotD "LeftMouseUpAction"]
MouseLeaveAction=[!EnableMouseAction MeterVotD "LeftMouseUpAction"]
Group=CommandBar

[MeterCommandBarOpenLogos]
Meter=Image
TooltipText="Open Logos"
ImageName=#@#Images\Logos.png
PreserveAspectRatio=1
GreyScale=1
X=#IconVPad#
Y=(#Height# - (#LgIconSize# + 2))
H=#LgIconSize#
LeftMouseUpAction=logosref:Bible.[MeasureVerseShortRef]
MouseOverAction=[!SetOption MeterCommandBarOpenLogos GreyScale 0][!Update]
MouseLeaveAction=[!SetOption MeterCommandBarOpenLogos GreyScale 1][!Update]
DynamicVariables=1
Group=CommandBar

[MeterCommandBarOpenPassageGuide]
Meter=Image
TooltipText="Open Passage Guide to [&MeasureVerseRef]"
ImageName=#@#Images\PG.png
PreserveAspectRatio=1
GreyScale=1
X=#IconHPad#R
Y=(#Height# - (#SmIconSize# + #IconVPad#))
H=#SmIconSize#
W=#SmIconSize#
LeftMouseUpAction=https://ref.ly/logos4/Guide?t=My+Passage+Guide&ref=Bible.[MeasureVerseShortRef]
MouseOverAction=[!SetOption MeterCommandBarOpenPassageGuide GreyScale 0][!SetOption MeterCommandBarOpenPassageGuide SolidColor cccccc33][!Update]
MouseLeaveAction=[!SetOption MeterCommandBarOpenPassageGuide GreyScale 1][!SetOption MeterCommandBarOpenPassageGuide SolidColor 00000000][!Update]
DynamicVariables=1
Group=CommandBar

[MeterCommandBarCopyBible]
Meter=Image
TooltipText="Copy bible verse to clipboard"
ImageName=#@#Images\CopyBible.png
PreserveAspectRatio=1
GreyScale=1
X=#IconHPad#R
Y=(#Height# - (#SmIconSize# + #IconVPad#))
H=#SmIconSize#
W=#SmIconSize#
LeftMouseUpAction=[!SetClip [&MeasureVerseText]]
MouseOverAction=[!SetOption MeterCommandBarCopyBible GreyScale 0][!SetOption MeterCommandBarCopyBible SolidColor cccccc33][!Update]
MouseLeaveAction=[!SetOption MeterCommandBarCopyBible GreyScale 1][!SetOption MeterCommandBarCopyBible SolidColor 00000000][!Update]
Group=CommandBar

[MeterCommandBarCopyRf]
Meter=Image
TooltipText="Copy bible reference to clipboard"
ImageName=#@#Images\CopyRf.png
PreserveAspectRatio=1
GreyScale=1
X=#IconHPad#R
Y=(#Height# - (#SmIconSize# + #IconVPad#))
H=#SmIconSize#
W=#SmIconSize#
LeftMouseUpAction=[!SetClip [&MeasureVerseRef]]
MouseOverAction=[!SetOption MeterCommandBarCopyRf GreyScale 0][!SetOption MeterCommandBarCopyRf SolidColor cccccc33][!Update]
MouseLeaveAction=[!SetOption MeterCommandBarCopyRf GreyScale 1][!SetOption MeterCommandBarCopyRf SolidColor 00000000][!Update]
Group=CommandBar
