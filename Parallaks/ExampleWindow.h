/*
 * ExampleWindow.h
 *
 *  Created on: 19 окт. 2020 г.
 *      Author: unyuu
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_

#include "Window.h"

class ExampleWindow: public Window
{
protected:
	std::shared_ptr<SDL_Texture> _sky,_airplane, _mountes, _cloud, _cloud1, _sun, _lug, _bird, _tree, _tree1;
	int _width_cloud, _width_sun, _sky_x, _sky_x2, _sun_x, _sun_y,
	_cloud_x, _cloud_x2, _cloud_x3, _cloud_x4, _cloud_x5, _cloud_x6,
	_sky_y, _mountes_y, _cloud_y, _st_slow, _st_cloud, _st_sun,
	_st_fast, _st_tree, _lug_x, _lug_x2, _lug_y, _bird_x, _bird_y,
	_tree_x, _tree_x2, _tree_y, _airplane_x, _airplane_y,
	_tree1_x, _tree1_x2, _tree1_y;

public:
	ExampleWindow(
			int width = DEFAULT_WIDTH,
			int height = DEFAULT_HEIGHT);
	virtual ~ExampleWindow() = default;

	virtual void render() override;
	virtual void do_logic() override;
	virtual void handle_keys(const Uint8 *keys) override;
};


#endif /* EXAMPLEWINDOW_H_ */


