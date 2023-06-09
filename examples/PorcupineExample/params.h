
/*
    Copyright 2020-2023 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>

    // keyword = privet kompyuter
static const uint8_t KEYWORD_ARRAY[] = {
        0x37, 0x85, 0x26, 0x81, 0xea, 0x15, 0xb1, 0x70, 0x5e, 0x97, 0xbb, 0x61, 0x4d, 0xdd, 0x40, 0x32, 0xab, 0x59,
        0x49, 0xc5, 0xe9, 0x0c, 0xef, 0xf1, 0xe5, 0x2a, 0x52, 0x27, 0x17, 0xcb, 0xb7, 0x1d, 0x56, 0x0c, 0xe2, 0x68,
        0xf0, 0x6c, 0x5d, 0x52, 0x8e, 0x0e, 0xc6, 0x13, 0xa3, 0xab, 0xc2, 0xf9, 0x80, 0x8b, 0xb3, 0x32, 0xd2, 0x81,
        0x93, 0xf2, 0x4f, 0xa7, 0x4f, 0x5d, 0x17, 0xd1, 0xcc, 0xf2, 0xa9, 0x1e, 0xdf, 0x98, 0x6e, 0xaf, 0x4c, 0xf3,
        0x18, 0x10, 0xc6, 0x86, 0xc8, 0x28, 0xd2, 0x95, 0x12, 0xb6, 0x16, 0xf1, 0xe0, 0x9c, 0xff, 0xaf, 0x6c, 0xdf,
        0x6d, 0x90, 0xd9, 0xc4, 0xec, 0xab, 0xa8, 0x68, 0x1b, 0x18, 0xa1, 0x0e, 0x58, 0x81, 0x3f, 0x8e, 0x8d, 0x71,
        0xca, 0x2d, 0x8e, 0xef, 0x66, 0x75, 0xde, 0xb4, 0x34, 0x6d, 0x16, 0x90, 0x7b, 0xfb, 0x4d, 0x10, 0xa6, 0x89,
        0xe8, 0x99, 0x99, 0x12, 0x10, 0xa8, 0x42, 0xb7, 0x23, 0xad, 0x3e, 0xa6, 0x5f, 0xb3, 0x6d, 0xc7, 0x0a, 0xf1,
        0x8d, 0x2b, 0x59, 0x5b, 0xcb, 0xaf, 0x19, 0xbf, 0x7e, 0x7c, 0xd8, 0x4f, 0xad, 0x36, 0x95, 0xb2, 0x07, 0x4c,
        0x87, 0xb5, 0x53, 0x64, 0x95, 0x11, 0x3d, 0xad, 0x22, 0x33, 0xf3, 0x89, 0x71, 0xb6, 0x9f, 0x9c, 0x68, 0xe8,
        0xf4, 0x1a, 0x9f, 0xfe, 0x4e, 0x46, 0xf7, 0xc7, 0x39, 0x32, 0x6c, 0x94, 0x6e, 0xfd, 0x18, 0x92, 0x93, 0xcf,
        0xdb, 0xdf, 0xbf, 0xcc, 0x55, 0x18, 0x64, 0x0a, 0x12, 0xf8, 0x35, 0x38, 0xbf, 0xa7, 0xd2, 0x08, 0x6c, 0x98,
        0xc6, 0x51, 0x0f, 0xd5, 0xbc, 0x14, 0xf6, 0xac, 0x27, 0xd2, 0xef, 0xc8, 0xfa, 0x7c, 0x09, 0x4d, 0x61, 0xfa,
        0xd2, 0xc0, 0xaa, 0x7d, 0xa4, 0x07, 0x4a, 0xa0, 0x9f, 0xe4, 0xfa, 0x5a, 0x15, 0x0d, 0x17, 0xd6, 0x72, 0x1d,
        0x7a, 0x4b, 0x47, 0x1e, 0x8a, 0xaa, 0xfc, 0x81, 0x71, 0x4f, 0xdf, 0x84, 0x39, 0x0d, 0x22, 0x46, 0x67, 0x4f,
        0x49, 0x68, 0x92, 0xfe, 0x39, 0x8d, 0xb2, 0x00, 0xf1, 0x7b, 0xae, 0x17, 0x41, 0x5f, 0x4f, 0x24, 0xba, 0x66,
        0x74, 0x94, 0x40, 0x61, 0xa3, 0x94, 0x1c, 0x5a, 0xa5, 0xb9, 0x27, 0xa9, 0x8e, 0x3f, 0xc0, 0x25, 0xc6, 0xb3,
        0x06, 0x60, 0x07, 0x16, 0x32, 0xb6, 0xe2, 0x1a, 0x83, 0x6a, 0x76, 0xd4, 0x03, 0xd9, 0x91, 0x1c, 0x89, 0x6e,
        0xa5, 0xa4, 0x51, 0xf2, 0x0f, 0xfd, 0x0d, 0x69, 0xb9, 0x42, 0x92, 0x80, 0x97, 0x1f, 0x78, 0xfe, 0x18, 0xb0,
        0x50, 0xbf, 0xd6, 0xdc, 0x1f, 0xc0, 0x62, 0x08, 0x3c, 0x30, 0x5d, 0xf7, 0x77, 0x53, 0x4f, 0xb7, 0xc3, 0xb5,
        0xac, 0xa0, 0x6d, 0x2f, 0xf3, 0x2b, 0xc9, 0x30, 0xcc, 0x0e, 0xbd, 0xfe, 0xd1, 0x00, 0xb7, 0x80, 0x22, 0x11,
        0x5b, 0x1e, 0x69, 0x05, 0xa1, 0xba, 0xc3, 0xd5, 0x03, 0xc6, 0x02, 0xd6, 0xd4, 0xee, 0x92, 0x1a, 0xfb, 0x3c,
        0xfa, 0xd1, 0x85, 0xc5, 0x51, 0x8f, 0x4e, 0xc2, 0x19, 0x78, 0xbc, 0x99, 0x63, 0xee, 0x54, 0xee, 0x97, 0x09,
        0x2b, 0x40, 0x12, 0x60, 0x8a, 0x32, 0x73, 0xa2, 0xf9, 0x2a, 0x5c, 0xb9, 0x7f, 0x4a, 0x37, 0x8c, 0x4e, 0x8b,
        0xeb, 0x7a, 0x62, 0x12, 0x36, 0x4c, 0x4f, 0xba, 0xbb, 0xd8, 0x80, 0x01, 0x97, 0x18, 0x36, 0x98, 0x2b, 0xcf,
        0xc3, 0xae, 0xb7, 0x61, 0x01, 0x07, 0x1a, 0x62, 0xe4, 0x80, 0x54, 0xf3, 0x10, 0x55, 0x7c, 0x76, 0x16, 0x47,
        0x9f, 0xd1, 0x79, 0xe0, 0x6e, 0x85, 0xaa, 0x47, 0xab, 0xe6, 0x5c, 0xaf, 0x35, 0xb7, 0xf1, 0xe9, 0x0c, 0xb0,
        0xea, 0xd7, 0x4c, 0x7f, 0x59, 0x64, 0x3f, 0xe5, 0xc4, 0x60, 0x65, 0xbd, 0xf9, 0x7a, 0xd5, 0x60, 0x00, 0x91,
        0xab, 0x4e, 0x88, 0x9b, 0x83, 0xc5, 0x53, 0x66, 0xcc, 0x46, 0x49, 0xf2, 0xca, 0xf0, 0x85, 0x84, 0x4c, 0xcf,
        0xbe, 0x08, 0xc0, 0xfc, 0xf4, 0x16, 0x94, 0x5c, 0x89, 0x55, 0xc7, 0x50, 0x31, 0x16, 0x43, 0x64, 0xcf, 0x59,
        0x7d, 0x8b, 0x3d, 0x0d, 0x28, 0x89, 0x6b, 0x2c, 0xf2, 0x46, 0x76, 0x47, 0x0c, 0xbb, 0xfe, 0xfb, 0x88, 0x6e,
        0xf6, 0x6a, 0x1a, 0x09, 0x42, 0x01, 0xa1, 0x3c, 0x65, 0xe0, 0xad, 0xe3, 0xbd, 0x9e, 0xa8, 0x06, 0x7b, 0x96,
        0x98, 0xed, 0xc9, 0x91, 0xa4, 0x76, 0x9a, 0x02, 0x60, 0x5b, 0x9c, 0xc6, 0xd8, 0xab, 0xd9, 0x30, 0xc0, 0xcc,
        0x4e, 0x76, 0xc7, 0x6c, 0x43, 0x11, 0x44, 0x94, 0xe4, 0xa3, 0x07, 0x46, 0x72, 0xe2, 0x37, 0xf9, 0x72, 0x70,
        0x9b, 0x0a, 0x2b, 0xe2, 0xa6, 0x7e, 0xe4, 0x13, 0x07, 0x16, 0x4e, 0x8e, 0x1a, 0x94, 0xd6, 0x13, 0x9d, 0x53,
        0xb6, 0xca, 0x50, 0x25, 0x20, 0xbc, 0x4f, 0x60, 0xa7, 0x38, 0x08, 0x8a, 0x40, 0xa6, 0xb8, 0x57, 0xa9, 0x68,
        0x21, 0xb6, 0x48, 0xbe, 0x07, 0xab, 0x4f, 0xb9, 0xde, 0xc6, 0x4c, 0x8b, 0x71, 0xa7, 0xc1, 0xd1, 0x06, 0x3c,
        0x3a, 0xe2, 0xa9, 0x68, 0x7f, 0x4f, 0x25, 0xa4, 0x2a, 0x07, 0xfa, 0x0c, 0xbf, 0x2e, 0xbe, 0x2f, 0xb2, 0x74,
        0x57, 0xa6, 0x75, 0x34, 0x81, 0x91, 0xd1, 0x7a, 0x1c, 0x23, 0xe0, 0x55, 0xc1, 0xbf, 0x14, 0x1f, 0x57, 0x17,
        0x44, 0x2a, 0x46, 0x3e, 0x44, 0xbc, 0xca, 0x95, 0x63, 0xfb, 0x6e, 0x87, 0xcb, 0xee, 0x24, 0x4c, 0x3a, 0xbc,
        0x82, 0xd8, 0xc2, 0x4c
};



#endif // PARAMS_H
    