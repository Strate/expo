//
//  ABI35_0_0AIRGoogleMapPolyline.h
//
//  Created by Nick Italiano on 10/22/16.
//

#ifdef ABI35_0_0HAVE_GOOGLE_MAPS
#import <UIKit/UIKit.h>
#import <GoogleMaps/GoogleMaps.h>
#import <ReactABI35_0_0/ABI35_0_0RCTBridge.h>
#import "ABI35_0_0AIRGMSPolyline.h"
#import "ABI35_0_0AIRMapCoordinate.h"
#import "ABI35_0_0AIRGoogleMapMarker.h"

@interface ABI35_0_0AIRGoogleMapPolyline : UIView

@property (nonatomic, weak) ABI35_0_0RCTBridge *bridge;
@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, strong) ABI35_0_0AIRGMSPolyline *polyline;
@property (nonatomic, strong) NSArray<ABI35_0_0AIRMapCoordinate *> *coordinates;
@property (nonatomic, copy) ABI35_0_0RCTBubblingEventBlock onPress;

@property (nonatomic, strong) UIColor *strokeColor;
@property (nonatomic, assign) double strokeWidth;
@property (nonatomic, assign) UIColor *fillColor;
@property (nonatomic, strong) NSArray<NSNumber *> *lineDashPattern;
@property (nonatomic, assign) BOOL geodesic;
@property (nonatomic, assign) NSString *title;
@property (nonatomic, assign) int zIndex;
@property (nonatomic, assign) BOOL tappable;

@end

#endif
