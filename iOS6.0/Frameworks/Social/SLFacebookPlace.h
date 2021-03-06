/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSString, NSURL;

@interface SLFacebookPlace : NSObject <NSCoding>
{
    double _distance;
    double _longitude;
    NSString *_identifier;
    double _latitude;
    NSString *_category;
    NSURL *_pictureURL;
    NSString *_name;
}

+ (id)placeWithResponseDictionary:(id)arg1;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSURL *pictureURL; // @synthesize pictureURL=_pictureURL;
@property(retain) NSString *category; // @synthesize category=_category;
@property double latitude; // @synthesize latitude=_latitude;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property double longitude; // @synthesize longitude=_longitude;
@property double distance; // @synthesize distance=_distance;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)encodableProperties;

@end

