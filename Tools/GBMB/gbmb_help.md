**Map properties**

The** map properties**, which are located under the **File **menu,
contain the following settings which you can use to customize various
aspects of your map;

*Width*

Specifies the width of the map (in columns). This value must be between
1 and 1023.

*Height*

Specifies the height of the map (in rows). This value must be between 1
and 1023.

*Filename*

Specifies path and filename of the tileset which GBMB uses as tiles. A
tileset is mandatory and should be a valid GBR file. These files can be
made using GBTD. GBMB also uses this file to determine the size of the
tiles.

**Using the mouse**

By clicking the left button in the map grid, the tile location is
selected; keep the left button pressed down and move the cursor to
select a block of locations. To apply the currently selected tile (in
the tilelist) to the selection, press the space bar.

The right button is used for drawing. See *Draw types*Draw\_types for a
description of the available draw types.

Selecting a different tile as current is done by clicking on the
tilelist on the right of the screen, or by using *Bookmarks*Bookmarks.

Next to using the mouse, the map can be moved by pressing Ctrl in
conduction with the cursor-keys.

**Draw types**

GBMB supports the following draw types;

*Pen*

With Pen selected, the current tile will appear at the location the
cursor is pointing at. *Pen *can be selected via the vertical toolbar,
pressing CTRL-P, or using the menu-option under **Design**.

*Flood fill*

Flood fill will replace all same-numbered tiles in the surroundings of
the selected tile with the current tile. *Flood fill* can be selected
via the vertical toolbar, pressing CTRL-F, or using the menu-option
under **Design**.

*Dropper*

Dropper does not place any tile; it selects the tile at the
cursor-position as the current tile, and then activates the *Pen*
drawtype. *Dropper* can be selected via the vertical toolbar, pressing
CTRL-R, or using the menu-option under **Design**.

**GBMB versus GBTD**

GBMB was designed to cooperate with GBTD. First of all, GBMB needs a
tileset made by GBTD. This way, GBTD is used for designing tiles, so
GBMB does not have to include extra support which is already available
by using GBTD.

To make designing tiles and maps at the same time easier, GBMB will keep
track of any changes made to the currently selected tileset. This way,
it is possible to have GBMB and GBTD running at the same time; whenever
you save the tileset in GBTD, GBMB will immediately update the map to
represent the changes.

For an even tighter integration, use *Auto update*Auto\_update; this
feature will update changes the moment they are made.

**Auto update**

**Auto update**, which is located under the **View **menu and on the
vertical toolbar and responds to *Ctrl-U*, offers a tight integration
between (various sessions) of GBTD and GBMB.

When checked, all changes you are making in a GBTD session will
immediately show up on all other sessions which are using **Auto
update** for the same tileset. For example; if you have GBTD running,
and GBMB with a map which uses the same tileset, and both applications
have **Auto update** checked, a change in GBTD will directly be seen in
the map opened by GBMB.

*All* applications which use the same tileset, and have **Auto update**
checked, will respond to changes made by any other application. So if
you have various sessions of GBTD and GBMB running, all using the same
tileset, then a change in any open GBTD will be reflected in all others.

**Auto update** does not save any changes to the actual tileset on your
disk; you will have to do this explicitly.

**Inserting and deleting rows and columns**

Rows and columns can be inserted and deleted by using the buttons on the
vertical toolbar or the insert and delete menu-options under **Design**.

Inserting and deleting changes the width or height settings of a map's
*Map properties*Map\_properties.

**Clear map**

**Clear map**, which is located under the **Design** menu, will reset
all locations to tile 0; all *Location properties*Location\_properties
will also be reset to the *Default location
properties*Default\_location\_properties of tile 0.

**Clear map** will ask to save any changes before reseting.

**Block fill**

**Block fill**, which is located under the **Design** menu, will
automatically fill a rectangle of the map with a predefined pattern.
Each pattern starts with the tile selected in the tilelist on the left
of the window.

*Pattern*

Specifies which pattern should be used to fill the block.

*Left, Top*

The location of the upper-left corner of the block. These default to the
currently selected location.

*Width, Height*

The dimensions of the block. If a block of locations is currently
selected, these will default to the size of the selected block.

Note that it is allowed to fill a block which extends beyond the range
of the map; in this case, the extended regions will not be filled, but
the pattern will be applied as if these regions do exist.

**Introduction to location properties**

In essence, a map is a matrix with a number on each x/y crossing which
states the tile which should be used for that location. However, in
certain cases, this is not enough.

For instance, when building a map in which the end-user can walk around,
it can be required to specify the 'passability' for each location on the
matrix (so that the end-user will not be able to walk through walls).

For these situations, you can define a *Location property*, which is an
extra number per location. GBMB has the following functions which handle
location properties;

*Location properties*Location\_propertiesUse this option to define the
location properties you need.

*Default location properties*Default\_location\_propertiesUse this
option to set default property values for any tile in your tileset.

*Info panelInfo\_panel*Use this option to look at and change the
property values of the currently selected location.

*Property colors*Property\_colorsUse this option to activate the
Property colors.

**Location properties**

The **Location properties** option, which is located under the **File**
menu, is used to define the location properties for the current map. For
an overview of location properties, go to *Introduction to location
properties*Introduction\_to\_location\_properties.

GBMB supports a maximum of 32 location properties. This window has 2
edit-fields for each one of them; note that both have to have a correct
value before they can be used.

*Name*

The name of the property.

*Max*

The maximum value this property can have. This has to be between 1 and
65535 for a property to be correct.

*Bits*

This field shows the number of bits needed to store the resulting data
in an export-file.

Next to the location properties themselves, the optional Property colors
are also defined in this screen. Property colors can be bound to a
certain condition; when they are activated using the *Property
colors*Property\_colors option, each tile which concurres with the
selected condition will be 'color-washed' using the selected color.

**Default location properties**

The **Default location properties** option, which is located under the
**File** menu, is used to define the default values GBMB will use for
your *Location properties*Location\_properties when you place a tile on
the map.

On the left of the window, select the tile for which you want to change
the default values. Use the edit fields on the right to actually change
them.

Note that this option is only enabled when there are *Location
properties*Location\_properties available, and a proper tileset is
selected.

**Info panel**

With the **Info panel** option, located under the **View** menu or by
pressing Ctrl-I, you can change whether the info panel is visible or
not.

The Info panel is located at the bottom of the screen, and shows you the
value of your *Location properties*Location\_properties for the
currently selected location. The info panel also gives you the
opportunity to change any of these values.

Next to changing your own *Location properties*Location\_properties, the
Info panel is also used to change two predefined properties: *Vertical
flip* and *Horizontal flip.* These determine if the tile should be
flipped in either direction.

The Info panel also has a dropdown for selecting a palette; if you set
this to 'Default', the used palette is determined by the palette of the
tile. If an actual palette is selected, that palette is used for the
location, regardless of the palette of the tile. Note that this setting
depends on the current *Color set.*Color\_set

Note that the predefined properties only appear if they apply to the
current *Color set*Color\_set.

The operation of the Info panel varies for single or block selections;

*Single selected tile location*

The Info panel shows the current values of the selected tile; changes
apply for the selected tile only.

*Block of selected tile locations*

The Info panel does not show any current values, as these might differ
for the various tiles. Changing a value will change *all*selected tiles.

The info panel is on by default.

**Zoom**

With the **Zoom** option, which is located under **View**, and available
on the top toolbar, a map can be viewed using various sizes for the
tiles.

Note that this option as no influece on the resulting data.

**Grid**

When the **Grid** option (located under the **View** menu) is checked, a
tile-sized grid is shown on the map.

**Double markers**

When the **Double markers** option (located under the **View** menu) is
checked, small crosses will appear on the map. The dimension of the
block between four crosses is always 16 x 16 pixels, regardless of the
tile size.

**Bookmarks**

Bookmarks help navigating through the tileset; when a tile has been
bookmarked, you can return to it without searching through the set.

There can be a maximum of three bookmarks; each bookmarked tile has a
small number next to it in the tilelist to show you which bookmark
points to which tile.

Setting bookmarks is done using the **Set bookmark** option, which is
located under the **View** menu, or by pressing ALT accompanied by the
number of the bookmark.

Jumping to a bookmark is done using the **Goto bookmark** option, which
is also located under the **View** menu, or by pressing CTRL accompanied
by the number of the bookmark.

**Color set**

The **Color set** menu-option located under the **View** menu determines
how GBMB represents the four gameboy colors. This option is purely a
visual aid for the user; changing this option will not have any affect
on the resulting data.

The following color sets are available:

*Gameboy Pocket*

The four colors are shown in black-to-white grades; this set represents
the colors used by a Gameboy Pocket.

*Gameboy*

The four colors are shown in green-to-yellow grades; this set represents
the colors used by an original Gameboy.

*Super Gameboy*

The four colors are shown using the Super Gameboy palettes, as chosen in
GBTD (or as selected via the *Info panel*Info\_panel).

*Gameboy Color*

The four colors are shown using the Gameboy Color palettes, as chosen in
GBTD (or as selected via the *Info panel*Info\_panel).

*Gameboy Color (Filtered)*

The four colors are shown in the selected palette colors; this set is
technically the same as the one above, but before the colors are shown
on screen, they are filtered through the same color filter used by
NO$GMB; this filter shows colors which are more representative to the
colors used by the actual GBC.

Note: due to the nature of color-handling under Windows, some displays
might not be able to show the colorsets correctly.

**Property colors**

The **Property colors** option located under the **View** menu
determines if GBMB should show the defined Property colors.

See *Location properties*Location\_properties for a full description of
Property colors.

**Cutting and Pasting**

With **Cut**,** Copy** and **Paste**, which are located under the
**Edit** menu and on the toolbar, parts of a map can be send to and
retrieved from the Clipboard.

To Cut or Copy, select a part of the map with the left mouse-button, and
select either Cut or Copy. Copy will leave the selected tiles intact,
while Cut will overwrite them with the first tile of your tileset. When
only one tile is selected, the whole map is send to the Clipboard.

To Paste, select the top-left tile from where the pasting should start,
and select Paste.

There are two major ways of using these functions; to move or copy parts
of your map to a different map or location, and to import maps from of
export maps to a simple ASCII-type format.

For an in-depth specification of the format used, read *Clipboard
format*Clipboard\_format.

Note that both tiles as well as any properties are copied; however,
Paste does not do any validity-checking while pasting property-values,
so make sure these are correct.

GBMB will see any ASCII-values on the clipboard as valid input; data
which cannot be interpreted (like, for instance, text) is simply
ignored. However, GBMB will try to import any data supplied, which could
give unwanted results.

**Clipboard format**

GBMB uses an ASCII table-like format to Copy and Paste data via the
clipboard. Each line represents a row of the map (starting with the
first row), which is split up in various fields, which each represent a
column-field on that row, from left to right.

Lines are separated using a CR-LF combination, while fields are
separated using TAB-character (ASCII 9). Note that although both Cut and
Copy use a TAB, Paste will also interpret \[ ; : , {­Space}\] as
separators.

GBMB will produce a number of these matrixes, each containing a setting
within GBMB, in the following order:

Tilenumber

Vertical Flip

Horizontal Flip

GBC palettes

SGB palettes

One matrix for each property

Both Flip matrixes use and interpret a "0" for no flipping and a "1" for
flipping.

Both palettes refer to the palettes of the individual location; if the
number is either "4" (for SGB) or "8" (for GBC), the default palette is
used.

Each matrix is separated by a line which only contains a CR-LF
combination.

When Pasting, the property-matrixes are optional (actually, the tile,
flip and palette matrixes are also optional, but this is not an
advisable situation); when a matrix is not supplied, the values for the
setting are not changed.

Tip: the format used by GBMB can be handled by most well-known
spreadsheet-programs, which can therefore act as a good conduit between
a proprietary format and GBMB.

**Copy as bitmap**

With **Copy as bitmap**, which is located under the **Edit** menu, the
whole or part of the map will be send to the clipboard as a bitmap. The
bitmap will not include visible functions like *Grid*Grid,
*Bookmarks*Bookmarks or *Property colors*Property\_colors. The usage of
colors is determined by the currently selected *Color set*Color\_set.

If a block of locations is selected, then only the selected block is
send to the clipboard. If only one location is selected, the whole map
is send.

**Export options**

The export window (called by either
*Export*\_Export\_\_vs\_\_Export\_to\_ or *Export
to..*\_Export\_\_vs\_\_Export\_to\_) contains the following settings
which you can use to customize your export-file.

*Filename*

Specifies path and filename to which GBMB will export.

*Type*

Type of export-file. See *Export file types*Export\_file\_types for a
list of supported file types.

*Label*

This will be used as label for your map. See *Plane order* for a note on
labels.

*Section*

The section or group of the map.

*Bank*

The bank which should be used to store the map.

*Split*

If Split is used, maps will be split up into blocks; on of the uses for
this setting is to generate maps which can not fit into one bank.

*Block size*

The number of tiles per block. This setting only applies when using
*Split.*

*Change bank for each block*

When checked, each block will be placed in it's own bank, starting from
the selected *Bank *upwards.

The *Location format* settings determines how data for each location
should be represented. In essence, a format consists of a list of
properties (user defined and GBMB-supplied). At least one property
should be selected.

The *Resulting planes* panel will show you how the resulting format will
look like.

*Map layout*

Specifies which orientation should be used when exporting. There are two
settings;

*Rows*The map is exported on a row-per-row basis (horizontal).

*Columns*The map is exported on a column-per-column basis (vertical).

*Plane count*

Specifies the size of a location; the more planes, the more room you
have for storage. One plane represents one byte (per tile). The '0.5
plane'-setting represents 4 bits, where two planes per byte are stored.

*Plane order*

Specifies how the planes should be exported. There are two settings;

*Tiles are continues*Planes are packed for each tile; in this case,
there will be one dataset, with one label for the whole set.

*Planes are continues*With this settings, a dataset is generated for
each plane and each dataset has a label is the form *Label+ {­Plane
number\]*. In addition, an extra label is generated for the first plane,
which is named *Label*.

Note that although this setting has no practical use with a *Plane
count*-setting of '0.5 plane' or '1 plane', this setting is still valid,
and labels are generated accordingly.

*Tile offset*

This number will be added to each tile number. This way, you can work
with different tile numbers in GBTD and GBMB than in actual Gameboy
VRAM.

*Property*

Specifies which properties should be exported. The order of exporting is
the same as the order on screen. Next to the user defined *Location
properties*Location\_properties, the following GBMB-supplied properties
are available;

*\[Tile number\]*The tile which you selected for the location.

*\[Tile number: Low 8\]*The lower 8 bits of the tile which you selected
for the location.

*\[Tile number: High 9\]*The left-most 9th bit of the tile which you
selected for the location.

*\[Vertical flip\]*The vertical flip-setting of the location.

*\[Horizontal flip\]*The vertical flip-setting of the location.

*\[GBC Palette\]*The Gameboy Color-palette linked by GBTD to the tile
for the location.

*\[SGB Palette\]*The Super Gameboy-palette linked by GBTD to the tile
for the location.

*\[GBC BG Attribute\]*The standard BG Attribute-byte which would apply
to the location, with a priority of 0. Note that this is equal to:

\[0 filler\]

\[Vertical flip\]

\[Horizontal flip\]

\[0 filler\]

\[Tile number: High 9\]

\[GBC palette\]

*\[0 filler\]*This can be used to 'fill' one or more bits with 0.

*\[1 filler\]*This can be used to 'fill' one or more bits with 1.

*Bits*

The number of bits you want to export of the property. If the number
specified here is lower then the number of bits required, only the
lower-end will be exported. If it is higher, the 'extra' bits will be
filled with 0. Note: It is advised to let GBMB change this setting for
you; only change this setting for the fillers, or in very special cases.

**'Export' vs 'Export to...'**

You can start exports in two ways;

*Export to...*

This option is located under the **File **menu; use this option to set
up the desired *Export options*Export\_options. This should be done at
least once.

*Export*

This option is located under the **File **menu, has a button on the
horizontal toolbar, or is called by using Ctrl-E. This will silently
export data using the current settings. If the settings are invalid for
any reason, GBMB will report this and display the *Export
options*Export\_options.

As GBMB saves your last settings in the GBM file, and the settings will
generally not change, you can setup a GBM file according to your project
needs, and do further exports using the faster *Export*.

**Export file types**

The following file types are supported:

*RGBDS Assembly file*RGBDS\_Assembly\_file

*RGBDS Object file*RGBDS\_Object\_file

*TASM Assembly file*TASM\_Assembly\_file

*GBDK C file*GBDK\_C\_file

*All-purpose binary file*All\_purpose\_binary\_file

*ISAS Assembly file*ISAS\_Assembly\_file

**RGBDS Assembly file**

This type generates two files; an assembly file and an include file. The
include file can be used as reference to the assembly file by placing;

INCLUDE "&lt;include file&gt;"

in your own source. Also, do not forget to compile the assembly file and
include the resulting object-file in your project.

The both files contain two constants, named *Label*Export\_options +
'Width' and *Label*Export\_options + 'Height', which contain the
dimensions of the map.

A constant named *Label*Export\_options + 'Bank' contains the selected
bank.

To export a tileset to the HOME bank, set *Bank*Export\_options to 0.

This type generates the same output as the *RGBDS Object
file*RGBDS\_Object\_file type; use this type for 'debugging', and the
*RGBDS Object file*RGBDS\_Object\_file type for speed of compilation.

The default assembly file-extension is **z80**. The default include
file-extension is **inc**. See *INI file*INI\_file for information on
how to change these default values.

**RGBDS Object file**

This type is RGBDS "OBJ1" compatible, which can be used by the linker of
RGBDS 1.03.

As output is exactly the same as the uncompiled *RGBDS Assembly
file*RGBDS\_Assembly\_file type, see this type for further information.

The default object file-extension is **obj**. The default include
file-extension is **inc**. See *INI file*INI\_file for information on
how to change these default values.

**TASM Assembly file**

When using TASM file-type, only an assembly file is generated, as TASM
does not have support for include-files. To use the file, place a;

\#INCLUDE "&lt;Assembly file&gt;"

in your own source.

The file contains two constants, named *Label*Export\_options + 'Width'
and *Label*Export\_options + 'Height', which contain the dimensions of
the map.

A constant named *Label*Export\_options + 'Bank' contains the selected
bank.

The default file-extension is **z80**. See *INI file*INI\_file for
information on how to change this default value.

**GBDK C file**

This type generates two files; a C-source file and a header file. The
header file can be used as reference to the C-source file by placing;

\#INCLUDE &lt;Header file&gt;

in your source. Also, do not forget to compile the C-source file and
include the resulting object-file in your project.

The both files contain two defines, named *Label*Export\_options +
'Width' and *Label*Export\_options + 'Height', which contain the
dimensions of the map.

A constant named *Label*Export\_options + 'Bank' contains the selected
bank.

When exporting with *Planes are continues*Export\_options, the extra
*Label*Export\_options (with no number) is a define which points to
*Label*Export\_options + '0'.

The default C-source file-extension is **c**. The default header
file-extension is **h**. See *INI file*INI\_file for information on how
to change these default values.

**All-purpose binary file**

This file-type will generate a binary dump, much like how it would
appear in a ROM itself. This format is most useful if you need to do you
own specific processing which GBMB can't do for you.

As this is just a binary dump, there are no labels or constants
generated by this type.

The default file-extension is **bin**. See *INI file*INI\_file for
information on how to change this default value.

**ISAS Assembly file**

This type generates two files; an assembly file and an include file. The
include file can be used as reference to the assembly file by placing;

INCLUDE "&lt;include file&gt;"

in your own source. Also, do not forget to compile the assembly file and
include the resulting object-file in your project.

The both files contain two constants, named *Label*Export\_options +
'Width' and *Label*Export\_options + 'Height', which contain the
dimensions of the map.

A constant named *Label*Export\_options + 'Bank' contains the selected
bank.

To export a tileset to the HOME bank, set *Bank*Export\_options to 0.

The *Section*Export\_options setting refers to the GROUP-instruction
within the assembly file.

The default assembly file-extension is **s**.The default include
file-extension is **inc**. See *INI file*INI\_file for information on
how to change these default values.

**INI file**

GBMB can (and will automatically) be customized by changing settings in
a GBMB.INI file, which contains the following sections and settings;

**\[General\]**

*GBMPath*

Points to the path of the last opened GBM-file. This is the default path
used in the Open-command. The default value is the current path.

*GBRPath*

Points to the path of the last opened tileset-file. This is the default
path used in the Browse-command of *Map properties*Map\_properties. The
default value is the current path.

*BinExt*

The extension used by *All-purpose binary
file*All\_purpose\_binary\_file types. The default value is **bin**.

*ViewColorSet*

Default *Color set*Color\_set GBMB should use when no file is specified
on startup. 0 = *Standard*, 1 = *Gameboy*. The default value is
**Standard**.

*ViewZoom*

Default *Zoom*Zoom level GBMB should use when no file is specified on
startup. 0 = *25%*, 1 = *50%*, 2 = *100%*, 3 = *150%*, 4 = *200%*.The
default value is **100%**.

*ViewInfoPanel*

Determines whether the *Info panel*Info\_panel should be visible when no
file is specified on startup. 0 = *No*,1 = *Yes*.The default value is
**Yes**.

*ViewGrid*

Default setting GBMB should use for the *Grid*Grid option when no file
is specified on startup. 0 = Off, 1 = On. The default value is **Off**.

*ViewDoubleMarkers*

Default setting GBMB should use for the *Double markers*Double\_markers
option when no file is specified on startup. 0 = Off, 1 = On. The
default value is **Off**.

*ViewPropertyColors*

Default setting GBMB should use for the *Property
colors*Property\_colors option when no file is specified on startup. 0 =
Off, 1 = On. The default value is **Off**.

**\[RGBDS\]**

*AsmExt*

The extension used by *RGBDS Assembly file*RGBDS\_Assembly\_file types.
The default value is **z80**.

*IncExt*

The extension used by include files generated by *RGBDS Assembly
file*RGBDS\_Assembly\_file and *RGBDS Object file*RGBDS\_Object\_file
types. The default value is **inc**.

*ObjExt*

The extension used by *RGBDS Object file*RGBDS\_Object\_file types. The
default value is **obj**.

**\[GBDK\]**

*CExt*

The extension used by *GBDK C file*GBDK\_C\_file types. The default
value is **c**.

*HExt*

The extension used by header files generated by *GBDK C
file*GBDK\_C\_file types. The default value is **h**.

**\[TASM\]**

*AsmExt*

The extension used by *TASM Assembly file*TASM\_Assembly\_file types.
The default value is **z80**.

**\[ISAS\]**

*AsmExt*

The extension used by *ISAS Assembly file*ISAS\_Assembly\_file types.
The default value is **s**.

*IncExt*

The extension used by include files generated by *ISAS Assembly
file*ISAS\_Assembly\_file types. The default value is **inc**.

**\[Recently used files\]**

Storage for *Reopen*. This section is managed by GBMB and should not be
changed manually.

**Contacting me and others**

You can contact me by mailing to:

**hpmulder@casema.net.**

For updates and info about GBMB, look at:

[***http://www.casema.net/\~hpmulder***](http://www.casema.net/~hpmulder)

Others:

**RGBDS**

RGBDS ("Rednex Gameboy Development System") is an assembly-package best
suited for large projects; it has build-in bank-support and an
assembler&lt;-&gt;linker setup, which gives you MAKE capabilities. You
can find RGBDS at:

[***http://www.matilde.demon.co.uk/rgbzone.htm***](http://www.matilde.demon.co.uk/rgbzone.htm)

**GBDK**

GBDK ("Gameboy Development Kit") includes an ANSI C compiler. If you
want to program in a higher level language, have a look at this one. You
can find GBDK at :

[***http://www.gbdev.org/gbdk/***](http://www.gbdev.org/gbdk/)

**Jeff Frohwein's GameBoy Tech Page**

Next to being the most active hub for Gameboy development, this site
also contains TASM, which is an assembler best suited for smaller
projects, and TILE256, which is a 256-color mapeditor for DOS. It is
located at:

[***http://home.hiwaay.net/\~jfrohwei/gameboy/home.html***](http://home.hiwaay.net/~jfrohwei/gameboy/home.html)

**NO$GMB**

This is an excellent Gameboy emulator which has a built-in debugger, and
can even emulate some of the limitations of a real Gameboy, making it a
powerfull development-tool. Get it at:

[***http://www.work.de/nocash/index.htm***](http://www.work.de/nocash/index.htm)
