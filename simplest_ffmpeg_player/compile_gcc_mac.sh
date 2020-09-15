#! /bin/sh
gcc simplest_ffmpeg_player_su.cpp -g -o simplest_ffmpeg_player.out \
-framework Cocoa -I /usr/local/include -L /usr/local/lib \
-lSDL2main -lSDL2 -lavformat -lavcodec -lavutil -lswscale
