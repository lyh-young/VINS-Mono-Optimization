//
// Created by leo on 19-7-14.
//

#ifndef SRC_LINE_FEATURE_H
#define SRC_LINE_FEATURE_H

#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/ximgproc/fast_line_detector.hpp>

#include "matching.h"
#include "config.h"
#include "auxiliar.h"
#include "line_descriptor_custom.hpp"

class LineFeature {
public:
    void detectLineFeatures(cv::Mat img, vector<cv::line_descriptor::KeyLine> &lines, cv::Mat &ldesc, double min_line_length);
    void matchLineFeatures(const cv::Mat &desc1, const cv::Mat &desc2, std::vector<int> &matches);
};


#endif //SRC_LINE_FEATURE_H
