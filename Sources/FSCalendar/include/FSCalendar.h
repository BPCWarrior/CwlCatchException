//
//  FSCalendar.h
//  FSCalendar
//
//  Created by Wenchao Ding on 29/1/15.
//  Copyright © 2016 Wenchao Ding. All rights reserved.
// 
//  https://github.com/WenchaoD
//
//  FSCalendar is a superior awesome calendar control with high performance, high customizablility and very simple usage.
//
//  @see FSCalendarDataSource
//  @see FSCalendarDelegate
//  @see FSCalendarDelegateAppearance
//  @see FSCalendarAppearance
//
@import UIKit;
#import <Foundation/Foundation.h>

//! Project version number for FSCalendar.
FOUNDATION_EXPORT double FSCalendarVersionNumber;

//! Project version string for FSCalendar.
FOUNDATION_EXPORT const unsigned char FSCalendarVersionString[];

typedef NS_ENUM(NSUInteger, FSCalendarScope) {
    FSCalendarScopeMonth,
    FSCalendarScopeWeek
};

typedef NS_ENUM(NSUInteger, FSCalendarScrollDirection) {
    FSCalendarScrollDirectionVertical,
    FSCalendarScrollDirectionHorizontal
};

typedef NS_ENUM(NSUInteger, FSCalendarPlaceholderType) {
    FSCalendarPlaceholderTypeNone          = 0,
    FSCalendarPlaceholderTypeFillHeadTail  = 1,
    FSCalendarPlaceholderTypeFillSixRows   = 2
};

typedef NS_ENUM(NSUInteger, FSCalendarMonthPosition) {
    FSCalendarMonthPositionPrevious,
    FSCalendarMonthPositionCurrent,
    FSCalendarMonthPositionNext,
    
    FSCalendarMonthPositionNotFound = NSNotFound
};
