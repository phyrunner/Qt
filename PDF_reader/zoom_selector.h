#ifndef ZOOM_SELECTOR_H
#define ZOOM_SELECTOR_H

#include <QObject>
#include <QWidget>
#include <QComboBox>
#include <QPdfView>

class zoom_selector: public QComboBox
{
    Q_OBJECT

public:
    zoom_selector(QWidget *parent = nullptr);

public slots:
    void set_zoom(qreal factor);
    void reset();
    void on_zoom_text_changed(const QString &text);

signals:
    void zoom_modeChange(QPdfView::ZoomMode mode);
    void zoom_factorChange(qreal factor);
};

#endif // ZOOM_SELECTOR_H
