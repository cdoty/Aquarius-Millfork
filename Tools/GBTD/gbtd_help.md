**Using the mouse**

You draw pixels by pressing either the left or right button when your
cursor is in a block in the drawing grid. See *Draw types*Draw\_types
for a description of the available draw types.

Selecting other colors for the buttons is done by pressing the left or
right button in one of the four colors located just under the drawing
grid.

By pressing the left button, you will change the current color
designated to the left button, which is presented by the color following
the **L**. This will also select the color (see *Colors*M7W4QR for more
information).

By pressing the right button, you will change the current color
designated to the right button, which is presented by the color
following the **R**.

**Draw types**

GBTD supports the following draw types;

*Pen*

With Pen selected, the current color will appear at the location the
cursor is pointing at. *Pen *can be selected via the vertical toolbar,
pressing CTRL-P, or using the menu-option under **Design**.

*Flood fill*

Flood fill will replace all same-colored pixels in the surroundings of
the selected pixel with the current color. *Flood fill* can be selected
via the vertical toolbar, pressing CTRL-F, or using the menu-option
under **Design**.

**Colors**

When drawing, you are actually setting color index-numbers. These are 0
upto 3. The actual colors these numbers represent (the "Object Palette")
can be changed by using the up- and down arrows next to the four colors
under the drawing grid.

First, select one of the four colors with the left button. A selection
rectangle will appear around the color. Now use the up- and down arrows
to change the selected color.

When the Gameboy Color or Super Gameboy-*Color set*Color\_set is
selected, the arrows are used for selecting palettes. Use
*Palettes*Palettes to change the actual colors used for the Gameboy
Color or Super Gameboy-*Color set*Color\_set.

**GBTD versus GBMB**

GBTD was designed to cooperate with GBMB. First of all, GBMB needs a
tileset made by GBTD. This way, GBTD is used for designing tiles, so
GBMB does not have to include extra support which is already available
by using GBTD.

To make designing tiles and maps at the same time easier, GBMB will keep
track of any changes made to the currently selected tileset.This way, it
is possible to have GBMB and GBTD running at the same time; whenever you
save the tileset in GBTD, GBMB will immediately update the map to
represent the changes.

For an even tighter integration, use *Auto update*Auto\_update; this
feature will update changes the moment they are made.

**Auto update**

**Auto update**, which is located under the **View **menu, on the
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

**Scrolling tiles**

Tiles can be scrolled to any direction by using the buttons on the
vertical toolbar or the Scroll menu-options under **Design**.

Tiles are scrolled rotationally; when you scroll to the left, the left
line of pixels reappears on the right.

**Flipping tiles**

Tiles can be flipped horizontally or vertically by using the buttons on
the vertical toolbar or the Flip menu-options under **Design**.

**Rotating tiles**

A tile can be rotated 90° in a clockwise direction by using the button
on the vertical toolbar or the Rotate clockwise menu-option under
**Design**.

This option is not available when working with 8x16 tiles.

**Clear tiles**

This option, which is located under the **Design **menu, will fill all
tiles in the tileset with the color 0.

Although GBTD will not ask you for confirmation, it will give you the
opportunity to save the tileset if you changed it.

*Tip:* if you want to clear only the current tile, *Cut
*Cutting\_and\_Pastingit to the Clipboard.

**Flip colors**

This option, which is located under the **Design **menu, will set all
the left colored pixels to the right color and vice versa.

**Tile size**

You can change the size of your tiles under the **View** menu.

GBTD supports 8x8, 16x8, 16x16 and 32x32 as tile size.

When you change the size of your tiles, the tiles will not be lost, but
are either merged or split up, depending on the new and old tile size.

**Tile count**

This option, which is located under the **View** menu, will let you
change the total tile count of the current tileset.

The maximum amount depends on the current *Tile size*Tile\_size; also,
to ensure proper conversion between the various sizes, GBTD will
automatically increase the number of tiles to a 16 8x8 tile-boundary.

**Simple**

The **Simple** option under the **View** menu determines if the multiple
tiles showcase should be displayed.

The multiple tile showcase shows you how the tile relates to itself in a
group. However, it takes up extra screen-space and can slow down your
system due to the extra screen-updates.

**Grid**

The **Grid **option under the **View** menu determines if the grid
should be displayed.

**Nibble markers**

The **Nibble markers **option under the **View** menu determines if the
Nibble markers should be displayed.

Nibble markers are small crosses which appear after every four pixels.

**Color set**

The **Color set** menu-option located under the **View** menu determines
how GBTD represents the four gameboy colors. This option is purely a
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

The four colors are shown in the selected palette colors; this set can
be used to represent Super Gameboy colors.

*Gameboy Color*

The four colors are shown in the selected palette colors; this set can
be used to represent Gameboy Color colors.

*Gameboy Color (Filtered)*

The four colors are shown in the selected palette colors; this set is
technically the same as the one above, but before the colors are shown
on screen, they are filtered through the same color filter used by
NO$GMB; this filter shows colors which are more representative to the
colors used by the actual GBC.

Note: due to the nature of color-handling under Windows, some displays
might not be able to show the colorsets correctly.

**Palettes**

The **Palettes** option, located under the **View** menu, determines the
colors used when either the *Gameboy Color* or *Super Gameboy*-*Color
set*Color\_set is active.

Then *Super Gameboy* is active, there are 4 palettes, each containing 4
colors. With *Gameboy Color* active, there are 8 palettes.

To change a color, first select it from the 4 palettes on the left, then
either click on the Gamma-panel, or type in a RGB-value on the right.

Note that GBTD only allows RGB-values of 0 to 31. Since the Super
Gameboy requires the first color of all 4 palettes to be the same, GBTD
will automatically change all color \#0-values when one of them is
changed.

GBTD mimmicks the logical palette behaviour of the Super Gameboy; the
selected palette is 'filtered' by the actual Gameboy-palette, in the
same way as the Super Gameboy itself operates.

Palettes can be send to/from the Clipboard, by using the three buttons
on screen. With *Copy all*, all palettes are copied to the Clipboard.
With *Copy*, the currently selected palette is send to the Clipboard.
*Paste* will start importing palettes from the currently selected
palette, and will keep importing palettes until the last palette is
reached, or the Clipboard runs out of palettes.

CTRL-C has the same function as the *Copy* button, while CTRL-V was the
same function as the *Paste* button.

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

**Cutting and Pasting**

The currently selected tile can be Cut, Copied and Pasted by using the
buttons on the horizontal toolbar, from the **Edit** menu option or by
using the designated hotkeys.

A cut or copied tile is send to the Windows clipboard as a bitmap with a
size of the currently selected tilesize. This bitmap can then be pasted
in GBTD, or in most other Windows applications.

You can use Paste to import the current bitmap in the clipboard to the
currently selected tile. Keep the following points in mind when doing
so;

╖GBTD will ignore any pixels outsize the current tilesize; ie, when you
paste a 100x100 sized bitmap into a 16x16 tile, GBTD will 'cut out' a
16x16 rectangle out of the bitmap, starting in the topleft corner.

╖Although GBTD will try to grayscale and remap gray-shades, it is best
to use an image-editor to grayscale the bitmap to a 16-color Windows
palette.

╖*Color sets*Color\_set do not have influece on the behaviour of Cutting
and Pasting; it always uses gray-shades.

When you cut a tile, GBTD will fill the current tile with color 0.

**Split Copy and Paste**

With Split Copy and Paste, which are located under the **Edit** menu
option, a bitmap larger than a tile can be pasted into GBTD; the bitmap
will be split up over a number of tiles. Copying will send a bitmap
containing a series of tiles to the clipboard.

In this way, images which are (much) larger than a tile can be easily
converted to tile-like data.

When pasting, GBTD will determine the size of the bitmap in the
clipboard, and convert accordingly; when copying, the settings of *Split
options*Split\_options apply. Note that to keep Split Copy and Paste
synchronized, pasting will automatically update the *Split
options*Split\_options.

*Color sets*Color\_set do not have influece on the behaviour of Split
Copy and Paste; it always uses gray-shades.

Pasting and copying will start at the currently selected tile.

*Tip:* Split Copy and Paste can also be used to copy a series of tiles
from one location to the other, or even to other GBR-files. Just Split
Copy them to the clipboard, goto the new location and Split Paste them
back.

**Split options**

The Split options window (located under the **Edit** menu, or called by
CTRL-L) contains the following settings which you can use to customize
your Split Copying and Pasting.

*Tile width*

The width of the image in tiles.

*Tile height*

The height of the image in tiles.

*Order*

The order in which GBTD should copy or paste the tiles.

**Import options**

The import window contains the following settings which you can use to
customize the way in which GBTD will import tiles from other packages.

*Filename*

Specifies path and filename from which GBTD will import.

*Type*

Type of import-file. See *Import file types*Import\_file\_types for a
list of supported file types.

*First tile in GBTD*

GBTD will store imported tiles starting at this tile; this number is
based on the currently selected tile-size.

*Tile count*

The number of tiles to import.

*First tile from import file*

The first tile GBTD should import, beginning at 0. This only applies to
GBE.

*First byte to use*

The location in a file at which GBTD should start importing. Use this to
skip possible headers. This only applies to binary files.

*Format*

Specifies the format of tiles in a binary file. The following are
supported:

*Byte per pixel*Each pixel uses one byte; only the two right-most bits
are used.

*2 bits per pixel*Each byte in the file contains four pixels, with the
left-most pixel starting at the left-most bits.

*Gameboy VRAM*The file contains a dump of VRAM (two bytes per 8 pixels,
split into two planes).

**Import file types**

The following file types are supported:

*GBE file*GBE\_file

*Binary 8x8 tiles*Binary\_8x8\_tiles

**GBE file**

As GBE files do not contain any info regarding the tile-size, GBTD
assumes the tile-size in the file is the same as the size of the current
set. This means that *First tile from import file*Import\_options and
*Tile count*Import\_options are based on the current tile set size.

The current color set will be changed to the color set supplied by the
GBE file.

GBTD will import **8x8**, **8x16**, **16x16**, and **32x32(new style)**
correctly; **32x32 (old style)** will be out of sync.

**Binary 8x8 tiles**

Use this type when the specified file contains a series of 8x8 tiles,
with pixels arranged in a left to right, top to bottom-fashion. The
actual format of the tiles is determined with *Format*Import\_options.

**Export options**

The export window (called by either
*Export*\_Export\_\_vs\_\_Export\_to\_ or *Export
to..*\_Export\_\_vs\_\_Export\_to\_) contains the following settings
which you can use to customize your export-file.

*Filename*

Specifies path and filename to which GBTD will export.

*Type*

Type of export-file. See *Export file types*Export\_file\_types for a
list of supported file types.

*Label*

This will be used as label for your tiles. If you export your tiles as
separate units, each tile will be labeled as this value + the tilenumber
with no leading zeros.

*Section*

The section of the tileset. Currently only used by RGBDS.

*Bank*

The bank in which the tileset should be placed. Currently only in use by
RGBDS.

*From/To*

The range of tiles which should be exported. These numbers are based on
the numbers in the tilelist.

*GB-Compress data*

If checked, the tiledata will be compressed using the GB-Compress
algorithm. See *Compression*Compression for more information.

*Export tiles as one unit*

If checked, all tiles will be exported as a continues block of data,
with the (optional) counter being based on the whole set. If not
checked, each tile will be exported as its own block of data, with its
own label and the counter being based on the tiles themselves.

*Format*

The data format which GBTD should use while exporting data. See *Export
data formats*Export\_data\_formats for a list of supported data formats.

*Counter*

If set to a value other than "none", GBTD will insert counter(s) inside
the exported data. See *Export counter types*Export\_counter\_types for
more information about counters.

*Include palette colors*

If checked, a series of constants will be generated which represent the
various color-values defined by *Palettes*Palettes. The value can be
send to the Super Gameboy without further conversion. The name of each
constant is *Label *+ 'SGBPal' + &lt;x&gt; + 'c' + &lt;y&gt;, where
&lt;x&gt; is the palette, and &lt;y&gt; is the color-location within the
palette.

*SGB palettes*

This setting determines the format (if any) which should be used when
exporting the Super Gameboy palette-entries per tile.

*GBC palettes*

This setting determines the format (if any) which should be used when
exporting the Gameboy Color palette-entries per tile.

*Convert to metatiles*

When checked, GBTD will export *metatiles*Metatiles instead of normal
tiles. See *Metatiles*Metatiles for more info about this setting.

*Split data*

When checked, GBTD will split the export result into separate block; a
possible use for this setting is to split a 512 tileset up into two
parts, as required by the GBC hardware.

*Block size*

Determines the number of tiles which should reside in a block. This
setting only applies when splitting data.

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
any reason, GBTD will report this and display the *Export
options*Export\_options.

As GBTD saves your last settings in the GBR file, and the settings will
generally not change, you can setup a GBR file according to your project
needs, and do further exports using the faster *Export*.

**Compression**

While exporting, GBTD can automatically compress your tiledata using the
GB-Compress algorithm, which was made by Jens Ch. Restemeier. The
resulting data can be decompressed by using the **decompress** routine,
which can be found in the **GB-Tools** package from the same author.

See *Export options*Export\_options for information on how to make GBTD
compress your tiledata.

Although counters can be used in conjunction with compression, keep in
mind that GB-Compress doesn't need, nor accepts them; if you need a
counter for you own purposes, either generate them as constants or step
over them before sending the data-location to the decompression routine.

Counters are placed before the compressed data (they are not part of
it); Byte-counters refer to the uncompressed size.

When *Export tiles as one unit* is unchecked, each tile will be
compressed on it's own.

The compression-routine used by GBTD is compatible to GB-Compress V1.2.

**Export data formats**

You can export your data to any of the following formats:

*Gameboy 4 color*

8 pixels in a row, split up in two planes. This is standard GB
video-memory format which can be moved to it on a byte-per-byte basis.

*Gameboy 2 color*

Exports 8 pixels in a row, but only one plane, containing color 0 and 3.
Do a read and double write to fill up both planes in GB video-memory.
This format is very suitable for black-and-white tiles like the
alphabet.

*Byte per color*

Writes one byte for each color, containing 0x00 upto 0x03. Although not
efficient for the GB itself, it is a good format for intermediate files
in conjunction with the *All-purpose binary
file*All\_purpose\_binary\_file type.

*Consecutive 4 color*

Each pixel is stored as 2 bits, but unlike the standard *Gameboy 4
color*, these bits are not split up in planes.

Tiles are arranged in the following 8x8 manor:

**8x88x1616x1632x32**

000202810

11313911

461214

571315

**Export counter types**

GBTD can automatically insert one or more counters when exporting. The
amount of counters is dependant on the *Export as one
unit*Export\_options checkbox. In essence, there are three counter-types
and three ways of insertion:

Counter-types;

*Byte-count*

The total amount of bytes.

*Tile-count*

The total amount of tiles. Exporting ten 16x16 tiles will result in a
counter of 10; Exporting ten 8x16 tiles will also result in a counter of
10.

*8x8-count*

The total amount of 8x8 tiles. Exporting ten 16x16 tiles will result in
a counter of (4 \* 10) = 40; ten 8x16 tiles will result in (2 \* 10) =
20.

Insertion;

*as Byte*

A byte will be inserted right before the data (note that it is possible
for these counters to receive a higher value than storable due to the
possibility of more than 255 tiles).

*as Word*

A word will be inserted right before the data.

*as Constant*

If applicable, GBTD will generate a constant containing the counter; the
name of this constant will be the tile-label +"Len".

**Metatiles**

One of the *Export options*Export\_options is *Convert to
metatiles.*When checked, GBTD will export your tileset as a set of
compacted Gameboy-tiles, with an index which describes the build-up of
each tile as shown by GBTD.

Metatiles can be seen as a virtual layer between your code and the
actual hardware; with normal tiles, the tile-number refers to the actual
Gameboy-tile (in VRAM). With metatiles, a tile-number refers to a
location in the index; the values at this location in turn refer to the
actual Gameboy-tile(s). The advantage of this system is that
Gameboy-tiles can be reused by various metatiles, thereby reducing the
strain on available Gameboy-tiles. This 'compacting' is automatically
done by GBTD.

The generated index uses one byte per Gameboy-tile; the length of each
index-entry depends on the current tile size. The arrangement of these
tiles is the same as specified by *Export data
formats*Export\_data\_formats.

The following options are available:

*Index offset*

Set this value to the actual Gameboy-tile used as the first tile. GBTD
will add this to all values in the index.

*Index counter*

If wanted, GBTD can generate a counter which applies to the index. See
*Export counter types*Export\_counter\_types for further info about
counters.

Note that there are suble differences when using counters with*Convert
to metatiles *either checked or unchecked. If checked, the tile-counter
applies to the compacted Gameboy-tiles. These are always 8x8, so
a*Tile-count* will always be the same as a *8x8-count.*.

The index-counter applies to the meta-tiles, which means that there can
be a difference between*Tile-count* and *8x8-count.*In this case, since
one byte per 8x8 Gameboy-tile is used, the will be no difference between
*Byte-count* and *8x8-count.*

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

The include file contains a constant named *Label*Export\_options +
'Bank', which contains the bank to which the data will be allocated.

To export a tileset to the HOME bank, set *Bank*Export\_options to 0.

If you export each tile as its own block of data (*Export as one
unit*Export\_options turned off), GBTD will still include a label named
*Label*Export\_options (without a number), which can be used as a 'main'
entrance to your data.

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

If you export each tile as its own block of data (*Export as one
unit*Export\_options turned off), GBTD will still include a label named
*Label*Export\_options (without a number), which can be used as a 'main'
entrance to your data.

The default file-extension is **z80**. See *INI file*INI\_file for
information on how to change this default value.

**GBDK C file**

This type generates two files; a C-source file and a header file. The
header file can be used as reference to the C-source file by placing;

\#INCLUDE &lt;Header file&gt;

in your source. Also, do not forget to compile the C-source file and
include the resulting object-file in your project.

Data is exported as type *unsigned char\[\]*. This means that if you
have word-type counters, these will be stored as two bytes. To load the
counter, either do two byte-loads of use a typecast.

The default C-source file-extension is **c**. The default header
file-extension is **h**. See *INI file*INI\_file for information on how
to change these default values.

**All-purpose binary file**

This file-type will generate a binary dump, much like how it would
appear in a ROM itself. This format is most useful if you need to do you
own specific processing which GBTD can't do for you.

As this is just a binary dump, there are no labels or constants
generated by this type.

The default file-extension is **bin**. See *INI file*INI\_file for
information on how to change this default value.

**ISAS Assembly file**

This type generates two files; an assembly file and an include file. The
include file can be used as reference to the assembly file by placing;

INCLUDE "&lt;include file&gt;"

in your source.

The default assembly file-extension is **s**.The default include
file-extension is **inc**. See *INI file*INI\_file for information on
how to change these default values.

**INI file**

GBTD can (and will automatically) be customized by changing settings in
a GBTD.INI file, which contains the following sections and settings;

**\[General\]**

*GBRPath*

Points to the path of the last opened GBR-file. This is the default path
used in the Open-command. The default value is the current path.

*BinExt*

The extension used by *All-purpose binary
file*All\_purpose\_binary\_file types. The default value is **bin**.

*ViewSimple*

Default setting GBTD should use for the *Simple*Simple option when no
file is specified on startup. 0 = Off, 1 = On. The default value is
**Off**.

*ViewGrid*

Default setting GBTD should use for the *Grid*Grid option when no file
is specified on startup. 0 = Off, 1 = On. The default value is **On**.

*ViewNibbleMarkers*

Default setting GBTD should use for the *Nibble markers*Nibble\_markers
option when no file is specified on startup. 0 = Off, 1 = On. The
default value is **Off**.

*ViewColorSet*

Default *Color set*Color\_set GBTD should use when no file is specified
on startup. 0 = *Standard*, 1 = *Gameboy*. The default value is
**Standard**.

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

Storage for *Reopen*. This section is managed by GBTD and should not be
changed manually.

**Contacting me and others**

You can contact me by mailing to:

**hpmulder@casema.net**.

For updates and info about GBTD, look at:

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

**Jens' Homepage**

Homepage of Jens Ch. Restemeier, the author of the GB-Compress
algorithm. You can find the **GB-Tools** package at this site, which
contains the decompression routine for GB-Compress.

[***http://www.geocities.com/SiliconValley/Way/3340/***](http://www.geocities.com/SiliconValley/Way/3340/)

**NO$GMB**

This is an excellent Gameboy emulator which has a built-in debugger, and
can even emulate some of the limitations of a real Gameboy, making it a
powerfull development-tool. Get it at:

[***http://www.work.de/nocash/index.htm***](http://www.work.de/nocash/index.htm)
