//
//  AvaliableCurrencies.h
//  SmartPesaNetworkEngine
//
//  Created by Arun on 11/15/15.
//  Copyright © 2015 SmartPesa. All rights reserved.
//

#import "SmartPesaBaseResponse.h"

@interface AvaliableCurrencies : SmartPesaBaseResponse

@property(nonatomic, strong)NSArray *availableCurrencies;

@end