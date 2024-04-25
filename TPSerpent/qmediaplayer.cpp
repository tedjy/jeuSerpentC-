#include "qmediaplayer.h"

QMediaPlayer::QMediaPlayer()
{

}

void QMediaPlayer::QMediaPlayers {
    player = new QMediaPlayer;
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    player->setMedia(QUrl::fromLocalFile("/Users/me/Music/coolsong.mp3"));
    player->setVolume(50);
    player->play();
}

