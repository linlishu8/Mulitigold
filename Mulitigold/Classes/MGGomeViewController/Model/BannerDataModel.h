//
//  BannerDataModel.h
//  Mulitigold
//
//  Created by 动感超人 on 16/5/18.
//  Copyright © 2016年 cib. All rights reserved.
//

#import <Mantle/Mantle.h>
#import <MTLFMDBAdapter/MTLFMDBAdapter.h>

@interface BannerDataModel : MTLModel<MTLJSONSerializing,MTLFMDBSerializing>

//@property (nonatomic, copy, readonly) NSString *bannerId;
@property (nonatomic, copy, readonly) NSString *content;
@property (nonatomic, copy, readonly) NSString *elementDesc;
//@property (nonatomic, copy, readonly) NSString *elementSequence;
@property (nonatomic, copy, readonly) NSString *elementTitle;
@property (nonatomic, copy, readonly) NSString *imgUrl;
//@property (nonatomic, copy, readonly) NSString *target;
@property (nonatomic, copy, readonly) NSString *tolink;
//@property (nonatomic, copy, readonly) NSString *type;

@end

@interface BannerFootModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, strong, readonly) NSDictionary *responseParams;
@property (nonatomic, readonly) double goldRate;

@end

@interface BannerImageModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy, readonly) NSString *imgUrl;

@end
