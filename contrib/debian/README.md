
Debian
====================
This directory contains files used to package fundind/fundin-qt
for Debian-based Linux systems. If you compile fundind/fundin-qt yourself, there are some useful files here.

## fundin: URI support ##


fundin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install fundin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your fundinqt binary to `/usr/bin`
and the `../../share/pixmaps/fundin128.png` to `/usr/share/pixmaps`

fundin-qt.protocol (KDE)

