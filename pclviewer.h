#ifndef PCLVIEWER_H
#define PCLVIEWER_H

#include <QWidget>

#include "pcl_includes.h"
#include "Vis.h"
#include "poseestimator.h"

namespace Ui {
class PCLViewer;
}

class PCLViewer : public QWidget
{
    Q_OBJECT

public:
    explicit PCLViewer(QWidget *parent = 0);
    ~PCLViewer();

public slots:
    void scene_leaf_size_changed (const QString &t);
    void object_leaf_size_changed(const QString &t);

protected:
    boost::shared_ptr<Vis> scene_vis, object_vis;
    PointCloudT::Ptr scene_cloud, object_cloud;
    boost::shared_ptr<PoseEstimator> pe;

private:
    Ui::PCLViewer *ui;
};

#endif // PCLVIEWER_H
