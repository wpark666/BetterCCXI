//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@interface CCUIControlCenterPushButtonSettings : NSObject
{
    BOOL _enabled;
    NSString *_displayName;
    NSString *_identifier;
}

+ (id)createWithSettingClass:(Class)arg1;
+ (id)settingsControllerModule;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)setDefaultValues;

@end

