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
TooltipText=[MeasureVerseText]
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
X=(#Width# - ((#SmIconSize# + #IconHPad#) * 3))
Y=4
Group=HeaderBar

[MeterHeaderShareToFL]
Meter=Image
TooltipText="Share on Faithlife"
ImageName=#@#Images\fl-round.png
PreserveAspectRatio=1
ImageTint=ccccccee
X=(#Width# - ((#SmIconSize# + #IconHPad#) * 3) + #IconHPad#)
Y=4
H=16
LeftMouseUpAction=https://faithlife.com/share?content=[MeasureVerseRef:EncodeURL]&url=[MeasureVotDLightbox:EncodeURL]
MouseOverAction=[!SetOption MeterHeaderShareToFL ImageTint "ffffffff"][!Update]
MouseLeaveAction=[!SetOption MeterHeaderShareToFL ImageTint "ccccccee"][!Update]
DynamicVariables=1
Group=HeaderBar

[MeterHeaderShareToFB]
Meter=Image
TooltipText="Share on Facebook"
ImageName=#@#Images\fb-round.png
PreserveAspectRatio=1
ImageTint=ccccccee
X=4R
Y=4
H=16
LeftMouseUpAction=https://www.facebook.com/sharer/sharer.php?kid_directed_site=0&sdk=joey&u=[MeasureVotDLightbox:EncodeURL]&display=popup&ref=plugin&src=share_button
MouseOverAction=[!SetOption MeterHeaderShareToFB ImageTint "ffffffff"][!Update]
MouseLeaveAction=[!SetOption MeterHeaderShareToFB ImageTint "ccccccee"][!Update]
DynamicVariables=1
Group=HeaderBar

[MeterHeaderShareToTwitter]
Meter=Image
TooltipText="Share on Twitter"
ImageName=#@#Images\twitter-round.png
PreserveAspectRatio=1
ImageTint=ccccccee
X=4R
Y=4
H=16
LeftMouseUpAction=https://twitter.com/intent/tweet?original_referer=[MeasureVotDLightbox:EncodeURL]&ref_src=twsrc%5Etfw&text=[MeasureVerseRef:EncodeURL]&tw_p=tweetbutton&url=[MeasureVotDLightbox:EncodeURL]
MouseOverAction=[!SetOption MeterHeaderShareToTwitter ImageTint "ffffffff"][!Update]
MouseLeaveAction=[!SetOption MeterHeaderShareToTwitter ImageTint "ccccccee"][!Update]
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
ImageTint=ccccccee
X=#IconVPad#
Y=(#Height# - (#LgIconSize# + 2))
H=#LgIconSize#
LeftMouseUpAction=https://ref.ly/logosres/esv?ref=Bible.[MeasureVerseShortRef]
MouseOverAction=[!SetOption MeterCommandBarOpenLogos ImageTint "ffffffff"][!Update]
MouseLeaveAction=[!SetOption MeterCommandBarOpenLogos ImageTint "ccccccee"][!Update]
DynamicVariables=1
Group=CommandBar

[MeterCommandBarOpenPassageGuide]
Meter=Image
TooltipText="Open Passage Guide to [&MeasureVerseRef]"
ImageName=#@#Images\PG.png
PreserveAspectRatio=1
ImageTint=ccccccee
X=#IconHPad#R
Y=(#Height# - (#MdIconSize# + #IconVPad#) - 2)
H=#MdIconSize#
W=#MdIconSize#
Padding=0,2,0,1
LeftMouseUpAction=https://ref.ly/logos4/Guide?t=My+Passage+Guide&ref=Bible.[MeasureVerseShortRef]
MouseOverAction=[!SetOption MeterCommandBarOpenPassageGuide ImageTint "ffffffff"][!SetOption MeterCommandBarOpenPassageGuide SolidColor "cccccc33"][!Update]
MouseLeaveAction=[!SetOption MeterCommandBarOpenPassageGuide ImageTint "ccccccee"][!SetOption MeterCommandBarOpenPassageGuide SolidColor "00000000"][!Update]
DynamicVariables=1
Group=CommandBar

[MeterCommandBarCopyBible]
Meter=Image
TooltipText="Copy bible verse to clipboard"
ImageName=#@#Images\CopyBible.png
PreserveAspectRatio=1
ImageTint=ccccccee
X=#IconHPad#R
Y=(#Height# - (#MdIconSize# + #IconVPad#) - 2)
H=#MdIconSize#
W=#MdIconSize#
Padding=0,2,0,1
LeftMouseUpAction=[!SetClip [&MeasureVerseFormattedText]]
MouseOverAction=[!SetOption MeterCommandBarCopyBible ImageTint "ffffffff"][!SetOption MeterCommandBarCopyBible SolidColor "cccccc33"][!Update]
MouseLeaveAction=[!SetOption MeterCommandBarCopyBible ImageTint "ccccccee"][!SetOption MeterCommandBarCopyBible SolidColor "00000000"][!Update]
Group=CommandBar

[MeterCommandBarCopyRf]
Meter=Image
TooltipText="Copy bible reference to clipboard"
ImageName=#@#Images\CopyRf.png
PreserveAspectRatio=1
ImageTint=ccccccee
X=#IconHPad#R
Y=(#Height# - (#MdIconSize# + #IconVPad#) - 2)
H=#MdIconSize#
W=#MdIconSize#
Padding=0,2,0,1
LeftMouseUpAction=[!SetClip [&MeasureVerseRef]]
MouseOverAction=[!SetOption MeterCommandBarCopyRf ImageTint "ffffffff"][!SetOption MeterCommandBarCopyRf SolidColor "cccccc33"][!Update]
MouseLeaveAction=[!SetOption MeterCommandBarCopyRf ImageTint "ccccccee"][!SetOption MeterCommandBarCopyRf SolidColor "00000000"][!Update]
Group=CommandBar
