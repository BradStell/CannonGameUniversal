//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace TestUniversal;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Xaml::Shapes;
using namespace Windows::UI;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
	SetupUI();	
}

void TestUniversal::MainPage::SetupUI()
{
	Color splitZones;
	splitZones.R = 34;
	splitZones.G = 34;
	splitZones.B = 34;
	splitZones.A = 255;
	SolidColorBrush^ offScreenColor = ref new SolidColorBrush(splitZones);
	SolidColorBrush^ greenBrush = ref new SolidColorBrush(Colors::Green);	

	Rectangle^ myRect = ref new Rectangle();
	myRect->Height = 100;
	myRect->Width = 100;
	myRect->Fill = greenBrush;

	Canvas::SetTop(myRect, 50);
	Canvas::SetLeft(myRect, 50);

	MyCanvas->Children->Append(myRect);

	textBlock->FontSize = 36;

	BottomZone->Fill = offScreenColor;
	TopZone->Fill = offScreenColor;
}
