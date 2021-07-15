/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

MainViewBase::MainViewBase() :
    sliderValueChangedCallback(this, &MainViewBase::sliderValueChangedCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 800, 480);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(153, 152, 152));

    graphBackground.setPosition(15, 24, 703, 424);
    graphBackground.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    graphBackground.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    graphBackground.setBorderSize(1);

    graph.setScale(1);
    graph.setGraphRangeX(0, 100);
    graph.setPosition(15, 24, 703, 424);
    graph.setGraphAreaMargin(10, 28, 19, 22);
    graph.setGraphAreaPadding(2, 6, 0, 6);
    graph.setGraphRangeY(0, 180);

    graphMajorYAxisGrid.setScale(1);
    graphMajorYAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graphMajorYAxisGrid.setInterval(20);
    graphMajorYAxisGrid.setLineWidth(1);
    graph.addGraphElement(graphMajorYAxisGrid);

    graphMajorXAxisLabel.setScale(1);
    graphMajorXAxisLabel.setInterval(20);
    graphMajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T_SINGLEUSEID2));
    graphMajorXAxisLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    graph.addBottomElement(graphMajorXAxisLabel);

    graphMajorYAxisLabel.setScale(1);
    graphMajorYAxisLabel.setInterval(20);
    graphMajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T_SINGLEUSEID1));
    graphMajorYAxisLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    graph.addLeftElement(graphMajorYAxisLabel);

    graphLine1.setScale(1);
    graphLine1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graphLine1.setPainter(graphLine1Painter);
    graphLine1.setLineWidth(2);
    graph.addGraphElement(graphLine1);

    sliderResolution.setXY(728, 136);
    sliderResolution.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_SLIDER_VERTICAL_SMALL_SLIDER3_VERTICAL_ROUND_BACK_ID), touchgfx::Bitmap(BITMAP_BLUE_SLIDER_VERTICAL_SMALL_SLIDER3_VERTICAL_ROUND_FILL_ID), touchgfx::Bitmap(BITMAP_BLUE_SLIDER_VERTICAL_SMALL_INDICATORS_SLIDER3_VERTICAL_ROUND_NOB_ID));
    sliderResolution.setupVerticalSlider(7, 3, 0, 0, 125);
    sliderResolution.setValueRange(20, 250);
    sliderResolution.setValue(180);
    sliderResolution.setNewValueCallback(sliderValueChangedCallback);

    add(__background);
    add(box1);
    add(graphBackground);
    add(graph);
    add(sliderResolution);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &sliderResolution)
    {
        //SliderValueChanged
        //When sliderResolution value changed call virtual function
        //Call sliderValueChanged
        sliderValueChanged(value);
    }
}
