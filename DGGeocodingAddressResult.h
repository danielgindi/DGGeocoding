//
//  DGGeocodingAddressResult.h
//  DGGeocoding
//
//  Created by Daniel Cohen Gindi on 3/29/13.
//  Copyright (c) 2013 danielgindi@gmail.com. All rights reserved.
//
//  https://github.com/danielgindi/DGGeocoding
//
//  The MIT License (MIT)
//  
//  Copyright (c) 2014 Daniel Cohen Gindi (danielgindi@gmail.com)
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE. 
//  

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface DGGeocodingAddressResult : NSObject

@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSArray *addressComponents; // DGGeocodingAddressComponent
@property (nonatomic, assign) double latitude;
@property (nonatomic, assign) double longitude;

@property (nonatomic, assign) double viewportSouthWestLat;
@property (nonatomic, assign) double viewportSouthWestLon;
@property (nonatomic, assign) double viewportNorthEastLat;
@property (nonatomic, assign) double viewportNorthEastLon;
@property (nonatomic, assign) double boundsSouthWestLat;
@property (nonatomic, assign) double boundsSouthWestLon;
@property (nonatomic, assign) double boundsNorthEastLat;
@property (nonatomic, assign) double boundsNorthEastLon;

@property (nonatomic, assign, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, assign, readonly) MKCoordinateSpan coordinateSpan;
@property (nonatomic, assign, readonly) MKCoordinateRegion coordinateRegion;

// Returns array of DGGeocodingAddressComponent
- (NSArray *)findAddressComponent:(NSString *)typeName;

@end