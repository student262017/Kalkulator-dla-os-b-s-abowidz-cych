#ifndef QMEDIAPLAYLIST_H
#define QMEDIAPLAYLIST_H

#endif // QMEDIAPLAYLIST_H

playlist = new QMediaPlaylist(this); // tworzę obiekt klasy QMediaPlaylist


playlist->addMedia(QMediaContent(QUrl::fromLocalFile("C:/audio1.mp3"))); // dodaję plik


player = new QMediaPlayer(this); // tworzę obiekt klasy QMediaPlayer


player->setPlaylist(playlist); // podpinam pod obiekt klasy QMediaPlayer wcześniej utworzony obiekt listy odtwarzania

player->play(); // uruchamiam odtwarzanie
